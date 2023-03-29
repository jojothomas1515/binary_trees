#include "binary_trees.h"

/**
 * binary_tree_preorder - operate in the preorder travesal manner
 * @tree: tree to operate on
 * @func: function used to operate on the tree
 *
 * Description: operate on the value of tree node with with passed function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
