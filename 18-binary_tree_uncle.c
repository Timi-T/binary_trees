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

/**
 * binary_tree_uncle - function to get the uncle of a binary tree
 *
 * @node: node to find uncle of
 *
 * Return: a pointer to the uncle of node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
