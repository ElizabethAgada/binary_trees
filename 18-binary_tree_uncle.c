#include "binary_trees.h"
/**
 * binary_tree_uncle - Dis function to find d uncle of a node
 * @node: D pointer to d node to find d uncle
 * Return: NULL, if node is NULL or has no uncl.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
