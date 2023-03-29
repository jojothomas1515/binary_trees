#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the node is root node
 * @node: target node
 * Return: 1 if true, 0 if false
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}
