#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node in the left
 *
 * @parent: the parent node
 * @value: value to store
 * Return: a pointer to the new node, NULL if it failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	else
	{
		parent->left = new_node;
		new_node->left = NULL;
	}
	new_node->parent = parent;
	new_node->right = NULL;
	return (new_node);
}
