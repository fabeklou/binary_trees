#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 if tree is NULL, nodes count otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t ln_count, rn_count;

	if (tree == NULL)
		return (0);

	ln_count = binary_tree_nodes(tree->left);
	rn_count = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (ln_count + rn_count + 1);
	return (ln_count + rn_count);
}
