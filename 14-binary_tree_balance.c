#include "binary_trees.h"

/**
 * binary_tree_balance - check the balance factor of a binary tree
 * @tree: tree node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		return (left - right);
	}

	return (0);
}
