#include "binary_trees.h"
/**
 * binary_tree_sibling - D function that finds d sibling of node
 * @node: D pointer to d node to find d sibling
 * Return: NULL if parent or node is NULL or node lacks sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
