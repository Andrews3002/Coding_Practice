#ifndef _BINARY_TREE_H
#define _BINARY_TREE_H

using namespace std;

struct BTNode{
    int data;
    BTNode *left;
    BTNode *right;
    BTNode *parent;
};

BTNode *initializeBT(int value);

#endif