#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts
 *                                 a node as the right-child of another node
 * @parent: parent node pointer
 * @value: value of the new node
 * Return: new node or (NULL)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
