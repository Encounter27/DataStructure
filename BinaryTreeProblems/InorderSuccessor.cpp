#include "BinaryTree.h"
#include "BST.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // Variation 2
    Node *root1 = NULL;
    for (int i = 0; i < 10; ++i)
    {
        BSTInsert(root1, rand() % 50);
    }

    DrawBinaryTree(root1);
    cout << endl;

    return 0;
}
