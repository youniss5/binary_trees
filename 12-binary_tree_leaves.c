#include "binary_trees.h"

/**
 * binary_tree_leaves - a function to count the leaves in a binary tree.
 * @tree: root node pointer of the tree
 * Return: leaves number of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
}
	return (leaves);
}
