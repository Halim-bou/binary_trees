#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert in the right
 *
 * @parent: parent node
 * @value: the value to store
 * Return: pointer to the node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->right = NULL;
	}
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	new_node->parent = parent;
	new_node->left = NULL;
	return (new_node);
}
