#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert a left child to a node
 *
 * @parent: parent to be inserted into
 * @value: value of new child node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;
	binary_tree_t *temp;

	if (!parent)
		return (NULL);
	right_child = binary_tree_node(parent, value);
	if (!parent->right)
		parent->right = right_child;
	else
	{
		temp = parent->right;
		parent->right = right_child;
		right_child->right = temp;
		temp->parent = right_child;
	}
	return (right_child);
}
