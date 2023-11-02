#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: a pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL, otherwise the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth;

	if (tree == NULL)
		return (0);

	for (node_depth = 0; tree->parent != NULL; node_depth++)
		tree = tree->parent;
	return (node_depth);
}
