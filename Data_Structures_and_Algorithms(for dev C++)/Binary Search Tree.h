#ifndef _BINARY_SEARCH_TREE_H
#define _BINARY_SEARCH_TREE_H

using namespace std;

struct BSTNode{
    int data;
    BSTNode *left;
    BSTNode *right;
    BSTNode *parent;
};

BSTNode *initializeBST(int value);
void insertIntoBSt(BSTNode *root, int value);
BSTNode *sortedArrayToBST(int nums[], int length);
int BinaryTreeHeight(BSTNode *root, int height);

#endif