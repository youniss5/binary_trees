#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: Parent node pointer.
 * @value: new node value
 * Return: pointer to a new node or (NULL)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
