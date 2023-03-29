#include "binary_trees.h"

/**
 * binary_tree_leaves - count leave nodes
 * @tree: target tree
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
			return (1);
		left = binary_tree_leaves(tree->leaves);
		right = binary_tree_leaves(tree->right);
		return (left + right);
	}
	return (0);

}
