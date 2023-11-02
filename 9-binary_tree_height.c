#include "binary_trees.h"

/**
 * count_nodes - gets the the largest number of nodes in a path
 * from a leaf node to a target node
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the number of nodes
 */
size_t count_nodes(const binary_tree_t *tree)
{
	size_t lt_height, rt_height;

	if (tree == NULL)
		return (0);

	lt_height = count_nodes(tree->left);
	rt_height = count_nodes(tree->right);

	return ((lt_height > rt_height) ? 1 + lt_height : 1 + rt_height);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL, height of the tree otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tree_height;

	tree_height = count_nodes(tree);

	return (tree_height ? tree_height - 1 : tree_height);
}
