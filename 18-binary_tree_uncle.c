#include "binary_trees.h"

/**
 * binary_tree_sibling_1 - Finds sibling of node
 * @node: Node
 * Return: NULL or pointer to sibling
 */

binary_tree_t *binary_tree_sibling_1(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);
	return (node->parent->right);
}

/**
 * binary_tree_uncle - Finds uncle of node
 * @node: Node
 * Return: Pointer to node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling_1(node->parent));
}
