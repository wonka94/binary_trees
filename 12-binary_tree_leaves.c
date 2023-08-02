#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Returns 0 if tree is NULL, else number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t left = binary_tree_leaves(tree->left);
	size_t right = binary_tree_leaves(tree->right);

	return (left + right);
}
