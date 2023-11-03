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
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is not full or is NULL, 1 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL or not perfect, 1 if tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lt_size, rt_size;

	if (tree == NULL)
		return (0);

	lt_size = count_nodes(tree->left);
	rt_size = count_nodes(tree->right);

	if (lt_size != rt_size)
		return (0);

	if (binary_tree_is_full(tree) == 0)
		return (0);

	return (1);
}
