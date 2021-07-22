#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if tree is full
 * @tree: Tree
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL )
		return (1);
	else
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	return (0);
}
