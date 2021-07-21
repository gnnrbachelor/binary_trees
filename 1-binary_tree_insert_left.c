#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts left node
 * @parent: Parent
 * @value: Value
 * Return: Pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;

	if (parent == NULL)
		return (NULL);

	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
	n_node->right = NULL;
	n_node->left = parent->left;
	if (parent->left != NULL)
	{
		n_node->left->parent = n_node;
		parent->left = n_node;

	}
	return (n_node);
}
