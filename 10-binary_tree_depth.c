#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth
 * @tree: Node in Tree
 * Return: 0 or depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	d = binary_tree_depth(tree->parent) + 1;
	return (d);
}

