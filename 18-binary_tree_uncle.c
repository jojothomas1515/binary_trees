#include "binary_trees.h"

/**
 * binary_tree_uncle - get the uncle of a node
 * @tree: target node
 * Return: NULL or Uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *pp_node;
	if (node && node->parent && node->parent->parent)
	{
		pp_node = node->parent->parent;

		if (pp_node->left == node->parent)
			return (pp_node->right);
		if (pp_node->right == node->parent)
			return (pp_node->left);
	}
	return (NULL);
}
