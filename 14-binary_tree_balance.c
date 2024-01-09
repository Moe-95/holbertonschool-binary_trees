#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL)
left_height = 1 + binary_tree_height(tree->left);

if (tree->right != NULL)
right_height = 1 + binary_tree_height(tree->right);

return ((left_height > right_height) ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the binary tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
return (0);
}