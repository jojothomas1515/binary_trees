#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left side of a tree node
 * @parent: parent node
 * @value: value of the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (parent != NULL)
	{
		temp = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = temp;
		return (parent->right);
	}
	return (NULL);
}
