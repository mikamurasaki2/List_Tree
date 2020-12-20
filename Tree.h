#pragma once
 
struct TreeNode {
	int value;
	TreeNode* left;
	TreeNode* right;
};

class Tree
{
public:
    Tree();
    TreeNode* insert(TreeNode* element, int value);
    void clearNode(TreeNode* node);
    void printAll(TreeNode* node);
    // ~Tree();
};