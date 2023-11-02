#include "binary_trees.h"
/**
 *binary_tree_is_leaf - cheke if node is leaf
 *@node - pointer to the node to be checked
 *Return: 0 or 1
 */
int <link>binary_tree_is_leaf</link>(const binary_tree_t *node)
{
    if (node == NULL)
        return 0;

    if (node->left == NULL && node->right == NULL)
        return 1;

    return 0;
}
