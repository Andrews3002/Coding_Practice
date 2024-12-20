#include<iostream>
#include "Binary Search Tree.h"

using namespace std;

BSTNode *initializeBST(int value){
    BSTNode *newnode = new BSTNode;
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = NULL;

    return newnode;
}

void insertIntoBSt(BSTNode *root, int value){

    if (value < root->data)
    {
        if (root->left == NULL)
        {
            root->left = initializeBST(value);
            root->left->parent = root;
            return;
        }
        else
        {
            insertIntoBSt(root->left, value);
        }
    }

    if (value >= root->data)
    {
        if (root->right == NULL)
        {
            root->right = initializeBST(value);
            root->right->parent = root;
            return;
        }
        else
        {
            insertIntoBSt(root->right, value);
        }
    }

    return;
}

BSTNode *sortedArrayToBST(int nums[], int length){
    int mid;

    if (length % 2 == 0)
    {
        mid = (length / 2) - 1;
    }
    else
    {
        mid = (length / 2);
    }

    BSTNode *root = initializeBST(nums[mid]);

    for (int i = 0; i < length; i++)
    {
        if (i == mid)
        {
            continue;
        }
        else
        {
            insertIntoBSt(root, nums[i]);
        }
    }

    return root;
}

int BinaryTreeHeight(BSTNode *root, int height){
    if (root == NULL)
    {
        return -1;
    }

    if (BinaryTreeHeight(root->left, height + 1) > BinaryTreeHeight(root->right, height + 1))
    {
        height = BinaryTreeHeight(root->left, height + 1);
    }
    else
    {
        height = BinaryTreeHeight(root->right, height + 1);
    }

    return height + 1;
}