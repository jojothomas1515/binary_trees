#include "binary_trees.h"

/**
 * binary_tree_size - returns the size of a binary tree
 * @tree: target node
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left, right;

	if (tree)
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		return (1 + left + right);
	}
	return (0);
}
