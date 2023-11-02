#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of node
 * @node: the node
 * Return: ...
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (binary_tree_depth(node->parent) + 1);
	return (0);
}
