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
 * binary_tree_is_full - function to check if a binary tree is full
 *
 * @tree: root node of tree
 *
 * Return: 1 if full and 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int f;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if ((tree->left) && (tree->right))
	{
		f = binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right);
		return (f);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - function to check if a binary tree is perfect
 *
 * @tree: root node of tree
 *
 * Return: 1 if perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_tree, r_tree;

	if (!tree)
		return (0);
	l_tree = binary_tree_height(tree->left);
	r_tree = binary_tree_height(tree->right);
	if ((binary_tree_is_full(tree)) && (l_tree - r_tree == 0))
	return (1);
	else
		return (0);
}
