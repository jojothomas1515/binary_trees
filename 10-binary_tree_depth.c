#include "binary_trees.h"

/**
 * binary_tree_depth - know how deep a tree node is
 * @tree: target node
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
