#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: root node pointer of the tree
 * Return: height or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
{
		size_t x = 0, y = 0;

		x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > y) ? l : y);
}
	return (0);
}
