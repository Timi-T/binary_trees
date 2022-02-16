#include "binary_trees.h"

/**
 * binary_tree_postorder - function to traverse a tree in order
 *
 * @tree: root node of tree to be traversed in post order
 * @func: function to perform on each node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
