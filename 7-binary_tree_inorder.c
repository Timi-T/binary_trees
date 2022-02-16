#include "binary_trees.h"

/**
 * binary_tree_inorder - function to traverse a tree in order
 *
 * @tree: root node of tree to be traversed
 * @func: function to perform on each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
