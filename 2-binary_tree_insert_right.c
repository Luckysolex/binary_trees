#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as
 *		the right-child of another node
 * @parent: Pointer to the node to insert
 * @value: Value of the new node inserted
 *
 * Return: pointer to the created node,
 *	or NULL on failure or if parent is NULL
 *
 * Description: If parent already has a right-child,
 *	the new node must take its place, and the old
 *	right-child must be set as the right-child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
