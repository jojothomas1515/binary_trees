#include "binary_trees.h"

/**
 * binary_tree_height - get the height of binary tree
 * @tree: the tree
 * Return: the height of the node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree && (tree->left || tree->right))
	{
	       	left = 1 + binary_tree_height(tree->left);
		right = 1 + binary_tree_height(tree->right);
		return (left > right ? left : right);

	}
	return (0);
}
