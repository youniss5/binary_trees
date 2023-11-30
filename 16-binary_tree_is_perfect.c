#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t dep(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recur(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - functioin to check if a node is a leaf of a binary tree.
 * @node: node pointer
 * Return: 1 if leaf otherwise 0
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * dep - return the depth of the node
 * @tree: A pointer to the node to measure the depth of.
 * Return: The depth of node.
 */
size_t dep(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + dep(tree->parent) : 0);
}

/**
 * get_leaf - gets the leaf of the tree
 * @tree: root node pointer of the tree
 * Return: pointer to the leaf
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recur - function to check if a binary tree is perfect recursively
 * @tree: root node pointer of the tree
 * @leaf_dep: depth of the tree
 * @level: node level
 * Return: 1 for perfect tree otherwise 0
 */
int is_perfect_recur(const binary_tree_t *tree,
		size_t leaf_dep, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_dep ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recur(tree->left, leaf_dep, level + 1) &&
		is_perfect_recur(tree->right, leaf_dep, level + 1));
}

/**
 * binary_tree_is_perfect - function to check tree is perfect.
 * @tree: root node pointer of the tree
 * Return: 0 if the tree is not perfect or null
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recur(tree, dep(get_leaf(tree)), 0));
}

