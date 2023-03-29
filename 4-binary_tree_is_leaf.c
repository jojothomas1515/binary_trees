#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if its a leaf node
 * @node: target node
 * Return: 1 on success and 0 on success
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	return (0);
}
