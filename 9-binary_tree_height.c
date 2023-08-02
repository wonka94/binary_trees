#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}
