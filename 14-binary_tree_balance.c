#include "binary_trees.h"

/**
 * binary_tree_balance - Returns balance factor
 * @tree: Tree
 * Return: 0 or balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	return (left - right);
}
