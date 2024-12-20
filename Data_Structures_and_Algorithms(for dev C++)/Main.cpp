#include<iostream>
#include "Algorithms.h"
#include "Binary Search Tree.h"
#include "Binary Tree.h"
#include "Stacks and Queues.h"
#include "Queues.h"
#include "Stacks.h"

using namespace std;

// void LevelOrderTraversal(BSTNode *root){
//     if (root == NULL) return;

//     Queue *q = initializeQ();
//     enqueue(q, root);

//     while (q->front != NULL) {
//         BSTNode *current = q->front->bstNode;
//         dequeue(q);

//         cout << current->data << " ";

//         if (current->right) enqueue(q, current->right);
//         if (current->left) enqueue(q, current->left);
//     }
// }


int main(){

    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int length = sizeof(arr) / sizeof(int);

    BSTNode *root = sortedArrayToBST(arr, length);

    cout << "Iterative level order traversal" << endl;
    // LevelOrderTraversal(root);

    // cout << "Recursive level order traversal" << endl;
    // int height =  BinaryTreeHeight(root, 0);

    // for (int i = 0; i < height+1; i++){
    //     LevelOrderTraversal_R(root, i);
    //     cout << endl;
    // }

    // cout << endl;

    // cout << "Recursive preorder traversal" << endl;

    // PreOrderTraversal_R(root);

    // cout << endl << endl;

    // cout << "Iterative preorder traversal" << endl;

    // PreOrderTraversal_I(root);

    // cout << endl << endl;

    // cout << "Recursive inorder traversal" << endl;

    // InOrderTraversal_R(root);

    // cout << endl << endl;

    // cout << "Iterative inorder traversal" << endl;

    // InOrderTraversal_I(root);

    // cout << endl << endl;

    // cout << "Recursicve postorder traversal" << endl;

    // PostOrderTraversal_R(root);

    // cout << endl << endl;

    // cout << "Iterative postorder traversal" << endl;

    // PostOrderTraversal_I(root);

    // cout << endl << endl;

    return 0;
}
