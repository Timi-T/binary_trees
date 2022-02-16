#include "binary_trees.h"

/**
 * binary_tree_height - function to measure height of a binary tree
 *
 * @tree: node of tree to be measured
 *
 * Return: height of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int h;

	if (!tree)
		return (-1);
	h = binary_tree_depth(tree->parent);
	return (h + 1);
}
