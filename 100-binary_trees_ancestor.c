#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node,
 *        or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *ancestor;
        if (first == NULL || second == NULL)
	        return NULL;
	
	ancestor = first;
        while (ancestor != NULL)
	{
		if (binary_tree_is_descendant(ancestor, first) &&
			binary_tree_is_descendant(ancestor, second))
		return (binary_tree_t *)ancestor;
        	ancestor = ancestor->parent;
        }
	return NULL;
}

/**
 * binary_tree_is_descendant - Checks if a node is a descendant of another node
 * @node: Pointer to the potential descendant node
 * @ancestor: Pointer to the potential ancestor node
 *
 * Return: 1 if node is a descendant of ancestor, 0 otherwise
 */
int binary_tree_is_descendant(const binary_tree_t *node, const binary_tree_t *ancestor)
{
	if (node == NULL)
		return 0;
	while (node != NULL)
	{
		if (node == ancestor)
			return 1;
		node = node->parent;
	}	
	return 0;
}
