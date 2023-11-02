#include <stdlib.h>
/**
 *binary_tree_is_root - check if a node is root
 *@node: pointer to the node to be checked
 *Return: 1 or 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
