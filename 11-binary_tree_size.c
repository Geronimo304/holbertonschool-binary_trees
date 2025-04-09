#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Size (number of nodes), or 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*Suma 1 por la raiz del arbol y luego suma el sub-arbol izquierdo */
	/*y luego el sub-arbol derecho, eso de el size*/
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
