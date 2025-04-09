#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Number of leaf nodes, or 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	/*Aca retorna 1 si el nodo es una hoja, osea, un nodo sin hijos*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);


	/*Suma recursivamente el numero de hojas en el subarbol izq y der*/
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
