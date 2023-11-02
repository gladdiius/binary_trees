#include <stdlib.h>
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: the node
 * Return: The uncle.
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return NULL;

	binary_tree_t *grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
		return grandparent->right;

	if (grandparent->right == node->parent)
		return grandparent->left;

	return NULL;
}
