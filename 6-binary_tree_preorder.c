#include "binary_trees.h"
/**
 * binary_tree_preorder - It goes thru a binary tree using pre-order traversal.
 * @tree: D points to d root node of d tree to traverse.
 * @func: D points to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}