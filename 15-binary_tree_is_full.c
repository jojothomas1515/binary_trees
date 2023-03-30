#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the tree is full
 * @tree: tree node
 * Return: 1 if tree if full 0 if false
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree && ((tree->left && tree->right) ||
		     (!tree->right && !tree->left))
		|| !tree)
	{
		return (1 * (binary_tree_is_full(tree->left) *
			     binary_tree_is_full(tree->left)));
	}
	return (0);
}
