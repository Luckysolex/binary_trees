#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int _left = 0, _right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->_left && tree->_right)
		{
			_left = binary_tree_is_full(tree->_left);
			_right = binary_tree_is_full(tree->_right);
			if (_left == 0 || _right == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->_left && !tree->_right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
