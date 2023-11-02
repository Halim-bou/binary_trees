#include "binary_trees.h"

/**
 * binary_tree_height - ....
 * @tree: ...
 * Return: ....
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	left_h = right_h = 0;
	if (tree == NULL)
		return (0);
	if (tree-> left == NULL && tree->right == NULL)
		return (0);
	left_h = binary_tree_height(tree->left) + 1;
	right_h = binary_tree_height(tree->right) + 1;
	if (left_h > right_h)
		return (left_h);
	return (right_h);
}
