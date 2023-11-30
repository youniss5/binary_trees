#include "binary_trees.h"

/**
 * binary_tree_balance - func to measure the balance factor of a binary tree
 * @tree: root node of the tree
 * Return: balance factor or 0 (NULL)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - height of the tree measure
 * @tree: root node of the tree
 * Return: return height or 0 (NULL)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t x = 0, y = 0;

		x = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		y = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((x > y) ? x : y);
	}
