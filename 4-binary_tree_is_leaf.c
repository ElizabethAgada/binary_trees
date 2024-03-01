#include "binary_trees.h"
/**
 * binary_tree_is_leaf - this checks if a node is a leaf.
 * @node: D pointer to d node to check.
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right != NULL)
		return (0);
	return (1);
}