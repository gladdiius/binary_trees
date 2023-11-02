#include "binary_trees.h"
/**
 * binary_tree_balance - a function that measures the
 *			balance factor of a binary tree
 * @tree: the data stored.
 * Return: the balance facor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
/**
 * binary_tree_height - function to measure height
 * @tree: the data stored
 * Return: the heigth
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
