#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if leaf
 * @node: Node
 * Return: 1 or 0
 */

int binary_tree_is_leaf_1(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - Checks if tree is perfect
 * @tree: Tree
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf_1(tree))
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
