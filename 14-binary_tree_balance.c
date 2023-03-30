#include "binary_trees.h"

size_t bth(const binary_tree_t *tree);

/**
 * binary_tree_balance - check the balance factor of a binary tree
 * @tree: tree node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree)
	{
		left = bth(tree->left);
		right = bth(tree->right);
		return (left - right);
	}

	return (0);
}


/**
 * bth - get the height of binary tree
 * @tree: the tree
 * Return: the height of the node
 */

size_t bth(const binary_tree_t *tree)
{
	int left, right;

	if (tree)
	{
		left = 1 + bth(tree->left);
		right = 1 + bth(tree->right);
		return (left > right ? left : right);

	}
	return (0);
}
