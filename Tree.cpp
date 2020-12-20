#include "Tree.h"
#include <iostream>

TreeNode* Tree::insert(TreeNode* element, int value)
{
    if (element == nullptr) {
        TreeNode* node = new TreeNode;
        node->value = value;
        node->right = nullptr;
        node->left = nullptr;
        return node;
    }
    else {

        if (value < element->value) {
            element->left = insert(element->left, value);
        }
        else {
            element->right = insert(element->right, value);
        }
        return nullptr;
    }
}

void Tree::clearNode(TreeNode* node)
{
    if (node == nullptr) {
        return;
    }
    clearNode(node->left);
    clearNode(node->right);
    delete node;
}

int tab = 0;
void Tree::printAll(TreeNode* node)
{
    if (node == nullptr) {
        return;
    }
    ++tab;
    printAll(node->left);

    for (int i = 0; i < tab; i++)
    {
        std::cout << "  ";
    }
    std::cout << node->value << std::endl;
    printAll(node->right);
    --tab;
}
