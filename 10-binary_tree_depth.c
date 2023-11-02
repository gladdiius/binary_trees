#include "binary_trees.h"
/**
 * binary_tree_depth -  a function to check
 *                  the depth of a binary tree.
 * @tree: the data stored
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t depth = 0;
	binary_tree_t const *current = tree;

	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}
