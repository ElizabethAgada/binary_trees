#include "binary_trees.h"
/**
 * binary_tree_height - This fubction returns d height of a tree.
 * @tree: D pointer to d root node of d tree tp measure d height.
 * Return: 0, if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t q = 0, z = 0;

		q = tree->left ? q + binary_tree_height(tree->left) : 0;
		z = tree->right ? q + binary_tree_height(tree->right) : 0;
		return ((q > z) ? q : z);
	}
	return (0);
}
