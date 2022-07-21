#include "binary_trees.h"
/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{

		if (!tree->left && !tree->right)
			return (binary_tree_leaves(tree->right)
					+ binary_tree_leaves(tree->left) + 1);
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
	return (0);

	}
	return (0);
}
