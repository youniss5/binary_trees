#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures
 *                                the depth of a node in a binary tree.
 * @tree: root node pointer of the tree
 * Return: depth or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

