#include "binary_trees.h"
#include <stdio.h>


/**
 * max_value - function to return the maximum of 2 values
 *
 * @x: first integer
 * @y: second integer
 *
 * Return: max of x and y
 */
int max_value(int x, int y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

/**
 * binary_tree_nodes - function to count parent nodes in a tree
 *
 * @tree: tree to count nodes from
 *
 * Return: number of parent nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	n = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (n + 1);
}
