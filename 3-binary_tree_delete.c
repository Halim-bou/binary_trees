#include "binary_trees.h"

/**
 * binary_tree_delete - delete binary trees
 * @tree: The root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->right != NULL)
			binary_tree_delete(tree->right);
		if (tree->left != NULL)
			binary_tree_delete(tree->left);
		free(tree);
	}
}
