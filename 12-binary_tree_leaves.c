#include "binary_trees.h"
/**
 *  binary_tree_leaves - counts the leaves in a binary tree
 *  @tree: pointer to the root node of the tree to count the number of leaves
 *
 *  Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);

if (tree->left == NULL && tree->right == NULL)
	return 1;

size_t left leaves = binary_tree_leaves(tree->left);
size_t right_leaves = binary_tree_leaves(tree->right);
return (left leaves + right_leaves);
}
