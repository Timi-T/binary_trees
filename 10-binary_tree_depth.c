#include "binary_trees.h"

/**
 * recurse_tree - function to recurse through tree
 *
 * @tree: tree to perform recursion on
 *
 * Return: depth of tree
 */

size_t recurse_tree(const binary_tree_t *tree)
{
	int d;

	if (!tree)
		return (-1);
	d = recurse_tree(tree->parent);
	return (d + 1);
}

/**
 * binary_tree_depth - function to measure height of a binary tree
 *
 * @tree: node of tree to be measured
 *
 * Return: height of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (!tree)
		return (0);
	depth = recurse_tree(tree);
	return (depth);
}


