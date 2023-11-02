#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: 0 if tree is NULL, the tree size otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lt_size, rt_size;

	if (tree == NULL)
		return (0);

	lt_size = binary_tree_size(tree->left);
	rt_size = binary_tree_size(tree->right);

	return (lt_size + rt_size + 1);
}
