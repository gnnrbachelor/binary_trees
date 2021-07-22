#include "binary_trees.h"

/**
 * binary_tree_size - Measures size of tree
 * @tree: Tree
 * Return: 0 or size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	else
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);

		return (left + right + 1);
	}
}
