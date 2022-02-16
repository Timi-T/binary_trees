#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if a node is a root node
 *
 * @node: node to be checked
 *
 * Return: 1 if node is root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
		return (1);
	else
		return (0);
}
