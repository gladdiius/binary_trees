#include "binary_trees.h"
/**
 * create_node - creates a new node 
 * @value: the value for the node
 * Return: new node on succsuss or NUll on faliure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return NULL;

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return node;
}
