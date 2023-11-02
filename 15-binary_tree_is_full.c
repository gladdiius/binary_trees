#include "binary_trees.h"
/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: the data stored
 * Return: 0 if false and 1 if true
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left != NULL && tree->right != NULL)
		&& binary_tree_is_full(tree->left)
		&& binary_tree_is_full(tree->right))
		return (1);

	return (0);
}
