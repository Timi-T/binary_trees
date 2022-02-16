#include "binary_trees.h"

/**
 * binary_tree_size - function to get number of noder in a tree or subtree
 *
 * @tree: pointer to root node of tree or sub tree
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s;

	if (!tree)
		return (0);
	s = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (s + 1);
}
