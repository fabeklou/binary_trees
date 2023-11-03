#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count
 * the number of leaves
 *
 * Return: 0 if tree is NULL, the leaves count otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t ll_count, rl_count;

	if (tree == NULL)
		return (0);

	ll_count = binary_tree_leaves(tree->left);
	rl_count = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (ll_count + rl_count + 1);
	return (ll_count + rl_count);
}
