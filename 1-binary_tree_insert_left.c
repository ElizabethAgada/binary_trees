#include "binary_trees.h"

/**
 * binary_tree_insert_left - This creates a new-code of a binary tree
 * @parent: D root of d binary tree
 * @value: D value d node
 * Return: D newly created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
