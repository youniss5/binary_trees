#include "binary_trees.h"

/**
 * is_full_recur - binary tree is full recursively or not
 * @tree: root node pointer of the binary tree
 * Return: tree is not full or 0
 */
int is_full_recur(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recur(tree->left) == 0 ||
		    is_full_recur(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: root node pointer of the tree
 * Return: tree is not full or NULL 0 otherwise 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recur(tree));
}

