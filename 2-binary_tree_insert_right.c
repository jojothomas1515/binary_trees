#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left side of a tree node
 * @parent: parent node
 * @value: value of the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent != NULL)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	return (NULL);
}
