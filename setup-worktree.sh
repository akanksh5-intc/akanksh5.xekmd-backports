#!/bin/sh

REPO_DIR="$(pwd)"
WORKTREE_BACKPORT="$REPO_DIR/oot-backport"
WORKTREE_RELEASES="$REPO_DIR/releases"
WORKTREE_KERNEL_SOURCES="$REPO_DIR/kernel-backport"

usage() {
	echo "Usage: $0 [create-worktree|clean-worktree|list-worktree|kernel-backport-only] [enter]"
	echo "Commands:"
	echo "  create-worktree   Create git worktree for oot-backport, releases, and kernel-backport branches."
	echo "  clean-worktree    Remove created worktree directories and prune git worktree references."
	echo "  list-worktree     List current git worktree."
	echo "  kernel-backport-only  Create only the base kernel via running backport.sh."
	exit 1
}

if [ $# -eq 0 ]; then
	# Default to create-worktree when no arguments are provided
	set -- create-worktree
fi

case "$1" in
	create-worktree)
		set -e
		{
			git worktree add "$WORKTREE_BACKPORT" oot-backport/main || { echo "Error: Failed to add worktree for backport/main. Run clean-worktree first"; exit 2; }
			git worktree add "$WORKTREE_RELEASES" releases/main || { echo "Error: Failed to add worktree for releases. Run clean-worktree first"; exit 2; }
			git worktree add "$WORKTREE_KERNEL_SOURCES" kernel-backport/main || { echo "Error: Failed to add worktree for main. Run clean-worktree first"; exit 2; }
		} || { echo "Error: One or more worktree operations failed."; exit 2; }

		echo "Worktree created:"
		git worktree list || { echo "Error: Failed to list worktree."; exit 2; }
		echo ""
		echo "Setting up submodules..."

		REMOTE_URL=$(git remote get-url origin) || { echo "Error: Failed to get remote URL."; exit 2; }

		git submodule add -b oot-backport/main -f "$REMOTE_URL" oot-backport || { echo "Error: Failed to add oot-backports submodule."; exit 2; }
		git submodule add -b releases/main -f "$REMOTE_URL" releases || { echo "Error: Failed to add releases submodule."; exit 2; }
		git submodule add -b kernel-backport/main -f "$REMOTE_URL" kernel-backport || { echo "Error: Failed to add kernel-backports submodule."; exit 2; }

		echo "Submodules created:"
		cat .gitmodules || { echo "Error: Failed to list submodules."; exit 2; }

		# Generate the base kernel by invoking the backport script from the kernel-backport worktree
		if [ -x "$WORKTREE_KERNEL_SOURCES/backport.sh" ]; then
			( 
				cd "$WORKTREE_KERNEL_SOURCES" && \
				./backport.sh
			) || { echo "Error: backport.sh failed"; exit 3; }
			if [ -d "$WORKTREE_KERNEL_SOURCES/kernel" ]; then
				echo "Generated kernel is available at: $WORKTREE_KERNEL_SOURCES/kernel"
				if cd "$WORKTREE_KERNEL_SOURCES/kernel"; then
					exec "${SHELL:-/bin/sh}" -i
				else
					echo "Error: failed to move to $WORKTREE_KERNEL_SOURCES/kernel"
				fi
			else
				echo "Warning: expected kernel directory not found in $WORKTREE_KERNEL_SOURCES"
			fi
		else
			echo "Error: $WORKTREE_KERNEL_SOURCES/backport.sh not found or not executable"
		fi
		;;
	kernel-backport-only)
		git worktree add "$WORKTREE_KERNEL_SOURCES" kernel-backport/main || { echo "Error: Failed to add worktree for backport/main. Run clean-worktree first"; exit 2; }
		# Run backport.sh in the kernel-backport worktree
		if [ -x "$WORKTREE_KERNEL_SOURCES/backport.sh" ]; then
			( 
				cd "$WORKTREE_KERNEL_SOURCES" && \
				./backport.sh
			) || { echo "Error: backport.sh failed"; exit 3; }
			if [ -d "$WORKTREE_KERNEL_SOURCES/kernel" ]; then
				echo "Generated kernel is available at: $WORKTREE_KERNEL_SOURCES/kernel"
				if cd "$WORKTREE_KERNEL_SOURCES/kernel"; then
					exec "${SHELL:-/bin/sh}" -i
				else
					echo "Error: failed to move to $WORKTREE_KERNEL_SOURCES/kernel"
				fi
			else
				echo "Warning: expected kernel directory not found in $WORKTREE_KERNEL_SOURCES"
			fi
		else
			echo "Error: $WORKTREE_KERNEL_SOURCES/backport.sh not found or not executable"
		fi
		;;
	oot-release-only)
		git worktree add "$WORKTREE_RELEASES" releases/main || { echo "Error: Failed to add worktree for releases. Run clean-worktree first"; exit 2; }
		if cd "$WORKTREE_RELEASES"; then
			exec "${SHELL:-/bin/sh}" -i
		else
			echo "Error: failed to move to $WORKTREE_RELEASES"
		fi
		;;
	clean-worktree)
		set -e
		{
			# Remove all the worktree folders
			git worktree remove --force "$WORKTREE_BACKPORT" || echo "Warning: Could not remove $WORKTREE_BACKPORT."
			git worktree remove --force "$WORKTREE_RELEASES" || echo "Warning: Could not remove $WORKTREE_RELEASES."
			git worktree remove --force "$WORKTREE_KERNEL_SOURCES" || echo "Warning: Could not remove $WORKTREE_KERNEL_SOURCES."

			git worktree prune || echo "Warning: Failed to prune worktree."

			rm -rf "$WORKTREE_BACKPORT" "$WORKTREE_RELEASES" "$WORKTREE_KERNEL_SOURCES"

			# Remove submodules if they exist
			if [ -f .gitmodules ]; then
				git submodule deinit --force oot-backport || echo "Warning: Could not deinitialize oot-backport submodule."
				git submodule deinit --force releases || echo "Warning: Could not deinitialize releases submodule."
				git submodule deinit --force kernel-backport || echo "Warning: Could not deinitialize kernel-backport submodule."

				rm -rf oot-backport releases kernel-backport
				git rm --force .gitmodules || echo "Warning: Could not remove .gitmodules file."
			else
				echo "No .gitmodules file found, skipping submodule cleanup."
			fi
		} || { echo "Error: One or more clean operations failed."; exit 2; }

		echo "Worktree and submodules cleaned."
		git worktree list || { echo "Error: Failed to list worktree."; exit 2; }
		;;
	list-worktree)
		echo "Current git worktree:"
		git worktree list || { echo "Error: Failed to list worktree."; exit 2; }
		;;
	*)
		usage
		;;
esac

