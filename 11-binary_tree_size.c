#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree:  pointer to the root node of the tree to measure
 * Return: Returns 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);
	size_t total_size = left_size + right_size + 1;

	return (total_size);
}
