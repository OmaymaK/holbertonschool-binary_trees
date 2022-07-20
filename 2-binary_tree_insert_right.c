#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child.
 * @parent: A pointer to the parent node
 * @value: The value for the node
 * Return: NULL or pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *tree;

	if (parent == NULL)
		return (NULL);
	tree = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		parent->right->parent = tree;
		tree->right = parent->right;
	}
	parent->right = tree;
	return (tree);
}
