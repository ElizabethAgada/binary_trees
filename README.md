Binary Trees

This project is an implementation of basic binary tree operations in C. It provides a set of functions to create, manipulate, and traverse binary trees. The goal is to offer a foundation for working with binary tree data structures and performing common operations.

Table of Contents
. Features
. Usage
. Function Descriptions
. Example
. Contributing
. License
. Contributors


Features

Create a binary tree.
Traverse the tree in different orders (pre-order, in-order, post-order).
Find the height of the tree.
Check if the tree is balanced.
Find the lowest common ancestor of two nodes.
and more...

Usage

Clone the repository:

git clone https://github.com/ElizabethAgada/binary_trees.git
Include the necessary source files in your project.

Use the provided functions to work with binary trees in your C program.

Function Descriptions
binary_tree_node_t *binary_tree_node(int value): Create a new binary tree node with a given value.

void binary_tree_print(const binary_tree_node_t *tree): Print the binary tree in a readable format.

size_t binary_tree_height(const binary_tree_node_t *tree): Get the height of the binary tree.

size_t binary_tree_depth(const binary_tree_node_t *tree): Get the depth of a given node in the binary tree.

void binary_tree_delete(binary_tree_node_t *tree): Delete the entire binary tree.

void binary_tree_preorder(const binary_tree_node_t *tree, void (*func)(int)): Traverse the tree in pre-order.

void binary_tree_inorder(const binary_tree_node_t *tree, void (*func)(int)): Traverse the tree in in-order.

void binary_tree_postorder(const binary_tree_node_t *tree, void (*func)(int)): Traverse the tree in post-order.

int binary_tree_is_leaf(const binary_tree_node_t *node): Check if a node is a leaf.

int binary_tree_is_full(const binary_tree_node_t *tree): Check if the binary tree is full.

int binary_tree_is_perfect(const binary_tree_node_t *tree): Check if the binary tree is perfect.

binary_tree_node_t *binary_trees_ancestor(const binary_tree_node_t *first, const binary_tree_node_t *second): Find the lowest common ancestor of two nodes.

Contributing

You are free to contribute by opening issues or submitting pull requests. Your feedbacks and suggestions are welcome.

