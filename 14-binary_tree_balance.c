#include "binary_trees.h"

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
 * binary_tree_height - function to measure height of a binary tree
 *
 * @tree: node of tree to be measured
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int h;

	if (!tree)
		return (-1);
	h = max_value(binary_tree_height(tree->left),
			binary_tree_height(tree->right));
	return (h + 1);
}

/**
 * binary_tree_balance - function to check if a binary tree is balanced
 *
 * @tree: root node of tree
 *
 * Return: difference between left and right height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (lh - rh);
}
