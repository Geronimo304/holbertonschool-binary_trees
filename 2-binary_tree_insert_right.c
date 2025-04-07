#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserta un nodo como hijo derecho de otro nodo
 * @parent: Puntero al nodo donde se insertará el hijo derecho
 * @value: Valor a almacenar en el nuevo nodo
 *
 * Return: Puntero al nuevo nodo, o NULL si falla o si el padre es NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nuevo_nodo;

	if (parent == NULL)
		return (NULL);

	nuevo_nodo = malloc(sizeof(binary_tree_t));
	if (nuevo_nodo == NULL)
		return (NULL);

	nuevo_nodo->n = value;
	nuevo_nodo->parent = parent;
	nuevo_nodo->left = NULL;
	nuevo_nodo->right = NULL;

	if (parent->right != NULL)
	{
		nuevo_nodo->right = parent->right;
		parent->right->parent = nuevo_nodo;
	}

	parent->right = nuevo_nodo;

	return (nuevo_nodo);
}
