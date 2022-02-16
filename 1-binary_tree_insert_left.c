#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert a left child to a node
 *
 * @parent: parent to be inserted into
 * @value: value of new child node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;
	binary_tree_t *temp;

	if (!parent)
		return (NULL);
	left_child = binary_tree_node(parent, value);
	if (!parent->left)
		parent->left = left_child;
	else
	{
		temp = parent->left;
		parent->left = left_child;
		left_child->left = temp;
		temp->parent = left_child;
	}
	return (left_child);
}
