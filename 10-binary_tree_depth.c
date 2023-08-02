#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree:  Pointer to the root node of the tree to measure.
 * Return: Returns 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t depth = 0;
	const binary_tree_t *current = tree;

	while (current->parent != NULL)
	{
		current = current->parent;
		depth++;
	}

	return (depth);
}
