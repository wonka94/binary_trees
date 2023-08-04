#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: 0 if tree is NULL else balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left = calculate_height(tree->left);
	int right = calculate_height(tree->right);

	return (left - right);
}

/**
 * calculate_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: the height of the tree. If tree is NULL, returns 0.
 */
int calculate_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = calculate_height(tree->left);
	int right_height = calculate_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
