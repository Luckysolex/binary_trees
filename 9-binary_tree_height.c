#include "binary_tress.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t _left = 0;
	size_t _right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((_left > _right) ? _left : _right);
	}
}
