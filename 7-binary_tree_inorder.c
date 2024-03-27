#include "binary_trees.h"
/**
 *  binary_tree_inorder -  goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @funct: Pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		        return;
	const binary_tree_t *current;
	size_t stack_size;
	const binary_tree_t *stack[1000];
	current = tree;
	stack_size = 0;
	while (current != NULL || stack_size > 0)
	{
		while(current != NULL)
		{
		stack[stack_size++] = current;
		current = current->left;
		}
		current = stack[--stack_size];
		func(current->n);
		current = current->right;
	}

}
