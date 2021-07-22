#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds sibling of node
 * @node: Node
 * Return: NULL or pointer to sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);
	return (node->parent->right);
}
