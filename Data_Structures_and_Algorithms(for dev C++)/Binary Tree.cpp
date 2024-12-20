#include<iostream>
#include "Binary Tree.h"

using namespace std;

BTNode *initializeBT(int value){
    BTNode *newnode = new BTNode;
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = NULL;
    
    return newnode;
}