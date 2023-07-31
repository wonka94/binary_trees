#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as the
 * right child of the given parent node.
 *
 * @parent: A pointer to the parent node of the new node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node, or
 * NULL if memory allocation fails or parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
