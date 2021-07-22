#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with children
 * @tree: Tree
 * Return: 0 or count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = NULL;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		count += (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (count);
}
