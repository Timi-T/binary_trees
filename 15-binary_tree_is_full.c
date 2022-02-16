#include "binary_trees.h"

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
		f = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
		return (f);
	}
	return (0);
}
