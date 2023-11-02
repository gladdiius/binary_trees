#include "binary_trees.h"
/**
 * binary_tree_leaves - count the leaf in binary tree
 * @tree: data stored
 * Return: the number of leafs
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return 1;

	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
