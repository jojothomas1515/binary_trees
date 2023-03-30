#include "binary_trees.h"

/**
 * binary_tree_sibling - return the sibling of a node
 * @node: target node
 * Return: sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
