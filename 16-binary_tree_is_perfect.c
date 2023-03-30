#include "binary_trees.h"

size_t btd(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - chack if the tree is perfect
 * @tree: target tree
 * Return: 1 for true or 0 for false
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		return (1 * (btd(tree->left) == btd(tree->right) ? 1 : 0));
	} else if (!tree->left && !tree->right)
		return (1);
	return (0);
}

/**
 * btd - know how deep a tree node is
 * @tree: target node
 * Return: depthy
 */

size_t btd(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree && tree->parent)
	{
		return (1 + btd(tree->parent));
	}
	return (0);
}
