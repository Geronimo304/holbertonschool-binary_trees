#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Uses post-order traversal to free all nodes.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	/* First delete left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Then delete the current node */
	free(tree);
}
