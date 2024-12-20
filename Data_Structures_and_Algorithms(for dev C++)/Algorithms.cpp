#include<iostream>
#include "Algorithms.h"
#include "Queues.h"
#include "Stacks.h"
#include "Binary Search Tree.h"
#include "Binary Tree.cpp"
#include "Stacks and Queues.h"

using namespace std;

//TODO Array Algorithms.................................................................................
void insertionSort(int arr[]) {
    for(int i=1; i<sizeof(arr); i++){
        int temp = arr[i];
        int j = i-1;

        while (j >= 0 && arr[j] > arr[i]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int partition(int arr[], int startIndex, int endIndex){
    int i = startIndex-1;

    for (int j = startIndex; j < endIndex; j++){
        if (arr[j] < arr[endIndex]){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[endIndex];
    arr[endIndex] = temp;

    return i;
}

void quickSort(int arr[], int startIndex, int endIndex){
    if (startIndex >= endIndex){
        return;
    }

    int pivot = partition(arr, startIndex, endIndex);
    quickSort(arr, startIndex, pivot-1);
    quickSort(arr, pivot+1, endIndex);
}

void merge(int arr[], int startIndex, int midIndex, int endIndex) {
    int leftLength = midIndex - startIndex + 1;
    int rightLength = endIndex - midIndex;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    for (int i = 0; i < leftLength; i++) {
        leftArr[i] = arr[startIndex + i];
    }
    for (int i = 0; i < rightLength; i++) {
        rightArr[i] = arr[midIndex + 1 + i];
    }

    int i = 0, j = 0, k = startIndex;

    while (i < leftLength && j < rightLength) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < leftLength) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < rightLength) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[], int startIndex, int endIndex) {
    int midIndex;

    if (startIndex < endIndex){
        midIndex = (endIndex + startIndex)/2;
        mergeSort(arr, startIndex, midIndex);
        mergeSort(arr, midIndex+1, endIndex);
        merge(arr, startIndex, midIndex, endIndex);
    }
}

//TODO Heap Algorithms.................................................................................
void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 ; i > 0; i--) {
        maxHeapify(arr, n, i);
    }
}

void maxHeapSort(int arr[], int n) {
    buildMaxHeap(arr, n);

    for (int i = n; i >= 2; i--) {
        int temp = arr[i];
        arr[i] = arr[1];
        arr[1] = temp;
        
        maxHeapify(arr, i-1, 1);
    }
}

void minHeapify(int arr[], int n, int i){
    int smallest = i;
    int left = i*2;
    int right = (i*2)+1;

    if ((left < n) && (arr[left] < arr[smallest])){
        smallest = left;
    }
    if ((right < n) && (arr[right] < arr[smallest])){
        smallest = right;
    }

    if (smallest != i){
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;

        minHeapify(arr, n, smallest);
    }
} 

void buildMinHeap(int arr[], int n){
    for(int i= n/2; i > 0; i--){
        minHeapify(arr, n, i);
    }
}

void minHeapSort(int arr[], int n){
    buildMinHeap(arr, n);

    for (int i = n; i > 1; i--){
        int temp = arr[i];
        arr[i] = arr[1];
        arr[1] = temp;

        minHeapify(arr, i-1, 1);
    } 
}

//TODO BST Algorithms.................................................................................

void LevelOrderTraversal_I(BSTNode *root){
    if (root == NULL) return;

    Queue *q = initializeQ();
    enqueue(q, root);

    while (q->front != NULL) {
        BSTNode *current = q->front->bstNode;
        dequeue(q);

        cout << current->data << " ";

        if (current->right) enqueue(q, current->right);
        if (current->left) enqueue(q, current->left);
    }
}

void PreOrderTraversal_R(BSTNode *root){
    if (root == NULL) {
        return;
    }
    
    cout << root->data << " ";  
    PreOrderTraversal_R(root->left); 
    PreOrderTraversal_R(root->right);
}

void PreOrderTraversal_I(BSTNode *root){
    if (root == NULL) return;

    Stack *s = initializeS();
    push(s, root);

    while (s->top != NULL) {
        BSTNode *current = pop(s);
        cout << current->data << " ";

        if (current->right != NULL) {
            push(s, current->right);
        }
        if (current->left != NULL) {
            push(s, current->left);
        }
    }

    delete s;
}

void InOrderTraversal_R(BSTNode *root){
    if (root == NULL) {
        return;
    }

    InOrderTraversal_R(root->left);
    cout << root->data << " ";
    InOrderTraversal_R(root->right);
}

void InOrderTraversal_I(BSTNode *root){
    if (root == NULL) {
        return;
    }

    Stack *s = initializeS();
    BSTNode *current = root;

    while (current != NULL || s->top != NULL) {
        while (current != NULL) {
            push(s, current);
            current = current->left;
        }

        current = pop(s);
        cout << current->data << " ";
        current = current->right;
    }
}

void PostOrderTraversal_R(BSTNode *root){
    if (root == NULL) {
        return;
    }
 
    PostOrderTraversal_R(root->left);
    PostOrderTraversal_R(root->right);
    cout << root->data << " ";
}

void PostOrderTraversal_I(BSTNode *root){
    if (root == NULL) {
        return;
    }

    Stack *s1 = initializeS();
    Stack *s2 = initializeS();

    push(s1, root);

    while (s1->top != NULL) {
        BSTNode *current = pop(s1);
        push(s2, current);

        if (current->left != NULL) {
            push(s1, current->left);
        }
        if (current->right != NULL) {
            push(s1, current->right);
        }
    }

    while (s2->top != NULL) {
        BSTNode *node = pop(s2);
        cout << node->data << " ";
    }
}