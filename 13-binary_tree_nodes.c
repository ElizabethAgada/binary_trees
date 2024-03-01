#include "binary_trees.h"
/**
 * binary_tree_nodes - D function to count d nodes with atleast
 * 1 child in a binary tree.
 * @tree: D pointer to d root node of d tree to count d no. of nodes
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
