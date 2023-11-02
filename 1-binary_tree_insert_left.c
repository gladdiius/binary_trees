#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a value to the left
 * @parent:the patent of the node
 * @value: the value in the node
 * Return: return NUll on faliure or return a node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;
	parent->left = new_node;

	if (new_node->left != NULL)
		new_node->left->parent = new_node;

	return (new_node);
}
