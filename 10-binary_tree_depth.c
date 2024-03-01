#include "binary_trees.h"
/**
 * binary_tree_depth - D function to measure d depth of a node
 * @tree: D pointer to d node to measure d depth.
 * Return: 0 if d tree is NULL, else return d depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
