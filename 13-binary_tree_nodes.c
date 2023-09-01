#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t  node_t = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node_t += ((tree->left || tree->right) ? 1 : 0);
		node_t += binary_tree_nodes(tree->left);
		node_t += binary_tree_nodes(tree->right);
		return (node_t);
	}
}
