#include "binary_trees.h"
/**
 * binary_tree_postorder - Dis goes thru a binary tree using
 * post-order traversal.
 * @tree: D points to d root node of d tree to traverse
 * @func: D points to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
