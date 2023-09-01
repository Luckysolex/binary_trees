#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - measures binary tree height
 * @tree: pointer to the node whose height is measured
 *
 * Return: 0 if tree is NULL otherwise height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t _left = 0, _right = 0;

		_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((_left > _right) ? _left : _right);
	}
	return (0);
}
