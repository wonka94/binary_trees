#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * @tree: Pointer to the root node of the tree
 * Return: 0 if tree is NULL else number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	size_t left = binary_tree_nodes(tree->left);
	size_t right = binary_tree_nodes(tree->right);

	return (left + right + 1);
}
