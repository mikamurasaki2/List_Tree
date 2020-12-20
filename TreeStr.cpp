#include <vector>
#include <iostream>
#include "Tree.h"

int main()
{
    Tree tree;
    TreeNode* root = nullptr;
    root = tree.insert(root, 0);

    for (int i = 1; i < 5; i++)
    {
        root = tree.insert(root, i);
    }

    tree.printAll(root);
}
