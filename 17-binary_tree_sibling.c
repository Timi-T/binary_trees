#include "binary_trees.h"

/**
 * binary_tree_sibling - function to return the sibling of node
 *
 * @node: node to find sibling of
 *
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node == (node->parent)->right)
		sibling = (node->parent)->left;
	else
		sibling = (node->parent)->right;
	if (sibling)
		return (sibling);
	return (NULL);
}
