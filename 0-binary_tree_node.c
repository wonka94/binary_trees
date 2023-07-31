#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node with the given value.
 *
 * @parent: A pointer to the parent node of the new node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = calloc(1, sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;

	return (new_node);
}
