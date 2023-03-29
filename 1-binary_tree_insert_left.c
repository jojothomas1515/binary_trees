#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left side of a tree node
 * @parent: parent node
 * @value: value of the new node
 * Return: address of new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);
	temp = parent->left;
	parent->left = binary_tree_node(parent, value);
	if (parent->left == NULL)
		return (NULL);
	parent->left->left  = temp;
	temp->parent = parent->left;
	return (parent->left);
}
