#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the tree is full
 * @tree: tree node
 * Return: 1 if tree if full 0 if false
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((!tree->left && tree->left) || (tree->left && !tree->right))
		return (0);
	if (tree && ((tree->left != NULL && tree->right != NULL) ||
		     (!tree->right && !tree->left)))
	{
		return (1 * binary_tree_is_full(tree->left) *
			     binary_tree_is_full(tree->right));
	}
	return (0);
}
