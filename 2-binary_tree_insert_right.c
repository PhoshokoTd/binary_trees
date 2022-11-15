#include "binary_trees.h"

/**
 * binary_tree_insert_right -> inserts a node as a right-child
 *                             of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: if a parent is NULL or an error occurs -NULL.
 *         otherwise - a pointer to the new node
 *
 * Description: If a parent already has a right-child, the new
 *              node takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
