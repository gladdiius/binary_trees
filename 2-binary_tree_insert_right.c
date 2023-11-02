#include "binary_trees.h"
/**
 * binary_tree_insert_right - as it's name it insert
 *                            to the right of node.
 * @parent: the above node.
 * @value: the value of a node.
 * Return: NULL on faliuer or pointer to node on success.
 *
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
