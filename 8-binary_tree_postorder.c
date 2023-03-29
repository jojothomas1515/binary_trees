#include "binary_trees.h"

/**
 * binary_tree_postorder - operate in the postorder travesal manner
 * @tree: tree to operate on
 * @func: function used to operate on the tree
 *
 * Description: operate on the value of tree node with with passed function
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		func(tree->n);
		binary_tree_postorder(tree->right, func);
	}
}
