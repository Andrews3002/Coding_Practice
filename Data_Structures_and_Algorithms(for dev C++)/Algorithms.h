#ifndef _ALGORITHMS_H
#define _ALGORITHMS_H

#include "Binary Search Tree.h"

using namespace std;

void insertionSort(int arr[]);
int partition(int arr[], int startIndex, int endIndex);
void quickSort(int arr[], int startIndex, int endIndex);
void merge(int arr[], int startIndex, int midIndex, int endIndex);
void mergeSort(int arr[], int startIndex, int endIndex);

void maxHeapify(int arr[], int n, int i);
void buildMaxHeap(int arr[], int n);
void maxHeapSort(int arr[], int n);
void minHeapify(int arr[], int n, int i);
void buildMinHeap(int arr[], int n);
void minHeapSort(int arr[], int n);

void LevelOrderTraversal_I(BSTNode *root);
void PreOrderTraversal_R(BSTNode *root);
void PreOrderTraversal_I(BSTNode *root);
void InOrderTraversal_R(BSTNode *root);
void InOrderTraversal_I(BSTNode *root);
void PostOrderTraversal_R(BSTNode *root);
void PostOrderTraversal_I(BSTNode *root);

#endif
