#include "binary_trees.h"

/**
 * binary_tree_preorder - function to traverse a tree & operate on each node
 *
 * @tree: root pointer to tree
 * @func: function pointer to traversing function
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
