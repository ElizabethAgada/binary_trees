#include "binary_trees.h"
/**
 * binary_tree_delete - This is a function that delete an entire binary tree
 * @tree: This is a pointer to d root node of d tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
