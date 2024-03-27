#include "binary_trees.h"
/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to root of tree
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
	return 0;
size_t left_height;
size_t right_height;
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height > right_height?left_height + 1: right_height + 1);
}
