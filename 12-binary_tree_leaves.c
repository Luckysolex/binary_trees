#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 If tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		leaves = l + r;
		return ((!l && !r) ? leaves + 1 : leaves + 0);
	}
}
