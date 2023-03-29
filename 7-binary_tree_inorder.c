#include "binary_trees.h"

/**
 * binary_tree_inorder - operate in the inorder travesal manner
 * @tree: tree to operate on
 * @func: function used to operate on the tree
 *
 * Description: operate on the value of tree node with with passed function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
