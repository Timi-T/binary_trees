#include "binary_trees.h"

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
 * recurse_tree - function to recurse through tree
 */

size_t recurse_tree(const binary_tree_t *tree)
{
	int h;

	if (!tree)
		return (-1);
	h = max_value(recurse_tree(tree->left), recurse_tree(tree->right));
	return (h + 1);
}

/**
 * binary_tree_height - function to measure height of a binary tree
 *
 * @tree: node of tree to be measured
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
		return (0);
	height = recurse_tree(tree);
	return (height);
}
