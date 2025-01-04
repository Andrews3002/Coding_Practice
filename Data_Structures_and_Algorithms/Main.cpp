#include<iostream>

using namespace std;
//Binary Tree data structure and functions
struct BTNode{
    int data;
    BTNode *left;
    BTNode *right;
    BTNode *parent;
};

BTNode *initializeBT(int value){
    BTNode *newnode = new BTNode;
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = NULL;
    
    return newnode;
}

//Binary Search Tree data structure and functions
struct BSTNode{
    int data;
    BSTNode *left;
    BSTNode *right;
    BSTNode *parent;
};

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

BSTNode *sortedArrayToBSTHelper(int nums[], int start, int end) {
    if (start > end) {
        return nullptr;
    }

    int mid = start + (end - start) / 2;
    BSTNode *root = initializeBST(nums[mid]);

    root->left = sortedArrayToBSTHelper(nums, start, mid - 1);
    root->right = sortedArrayToBSTHelper(nums, mid + 1, end);

    return root;
}

BSTNode *sortedArrayToBST(int nums[], int length) {
    return sortedArrayToBSTHelper(nums, 0, length - 1);
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

//Node data structure
struct Node{
    BSTNode *bstNode;
    Node *next;
};

//Stacks Data structure and functions
struct Stack{
    Node *top;
};

Stack *initializeS(){
    Stack *s = new Stack;
    s->top = NULL;
    return s;
}

void push(Stack *s, BSTNode *bstNode){
    if (s->top == NULL)
    {
        s->top = new Node;
        s->top->bstNode = bstNode;
        s->top->next = NULL;
        return;
    }
    else
    {
        Node *newnode = new Node;
        newnode->bstNode = bstNode;
        newnode->next = s->top;
        s->top = newnode;
        return;
    }
}

BSTNode *pop(Stack *s){
    if (s->top == NULL)
    {
        return NULL;
    }

    if (s->top->next == NULL)
    {
        BSTNode *temp = s->top->bstNode;
        delete (s->top);
        s->top = NULL;
        return temp;
    }
    else
    {
        BSTNode *temp = s->top->bstNode;
        s->top = s->top->next;
        return temp;
    }
}

//Queues data structure and functions
struct Queue{
    Node *front;
    Node *end;
};

Queue *initializeQ(){
    Queue *q = new Queue;
    q->front = NULL;
    q->end = NULL;
    return q;
}

void enqueue(Queue *q, BSTNode *bstNode){
    if (q->front == NULL)
    {
        Node *newnode = new Node;
        newnode->bstNode = bstNode;
        newnode->next = NULL;
        q->front = newnode;
        q->end = q->front;
        return;
    }
    else
    {
        Node *newnode = new Node;
        newnode->bstNode = bstNode;
        newnode->next = NULL;
        q->end->next = newnode;
        q->end = newnode;
        return;
    }
}

void dequeue(Queue *q){
    if (q->front == NULL)
    {
        return;
    }
    if (q->front == q->end)
    {
        int val = q->front->bstNode->data;
        cout << val << " ";
        q->front = NULL;
        q->end = NULL;
        return;
    }
    else
    {
        int val = q->front->bstNode->data;
        Node *temp = q->front;
        q->front = q->front->next;
        delete (temp);
        cout << val << " ";
        return;
    }
}

//TODO Array Algorithms.................................................................................
void insertionSort(){
}

int partition(){
}

void quickSort(){
}

void merge() {
}

void mergeSort() {
}

//TODO Heap Algorithms.................................................................................
void maxHeapify() {
}

void buildMaxHeap() {
}

void maxHeapSort() {
}

void minHeapify(){
} 

void buildMinHeap(){
}

void minHeapSort(){
}

//TODO BST Algorithms.................................................................................
void LevelOrderTraversal_R(){
}

void LevelOrderTraversal_I(){
}

void PreOrderTraversal_R(){
}

void PreOrderTraversal_I(){   
}

void InOrderTraversal_R(){
}

void InOrderTraversal_I(){
}

void PostOrderTraversal_R(){
}

void PostOrderTraversal_I(){
}

int main(){
    // Manually creating the nodes for the balanced BST
    BSTNode *root = new BSTNode;
    root->data = 10;
    root->left = new BSTNode;
    root->left->data = 5;
    root->left->left = new BSTNode;
    root->left->left->data = 3;
    root->left->left->left = new BSTNode;
    root->left->left->left->data = 2;
    root->left->left->right = new BSTNode;
    root->left->left->right->data = 4;
    root->left->right = new BSTNode;
    root->left->right->data = 7;
    root->left->right->left = new BSTNode;
    root->left->right->left->data = 6;
    root->left->right->right = new BSTNode;
    root->left->right->right->data = 8;

    root->right = new BSTNode;
    root->right->data = 15;
    root->right->left = new BSTNode;
    root->right->left->data = 12;
    root->right->left->left = new BSTNode;
    root->right->left->left->data = 11;
    root->right->left->right = new BSTNode;
    root->right->left->right->data = 13;
    root->right->right = new BSTNode;
    root->right->right->data = 18;
    root->right->right->left = new BSTNode;
    root->right->right->left->data = 17;
    root->right->right->right = new BSTNode;
    root->right->right->right->data = 20;

    // Setting all right pointers to NULL explicitly (optional as new() initializes it to NULL)
    root->left->left->left->left = NULL;
    root->left->left->left->right = NULL;
    root->left->left->right->left = NULL;
    root->left->left->right->right = NULL;
    root->left->right->left->left = NULL;
    root->left->right->left->right = NULL;
    root->left->right->right->left = NULL;
    root->left->right->right->right = NULL;
    root->right->left->left->left = NULL;
    root->right->left->left->right = NULL;
    root->right->left->right->left = NULL;
    root->right->left->right->right = NULL;
    root->right->right->left->left = NULL;
    root->right->right->left->right = NULL;
    root->right->right->right->left = NULL;
    root->right->right->right->right = NULL;


    cout << "Iterative level order traversal" << endl;

    LevelOrderTraversal_I(root);

    cout << endl << endl;

    cout << "Recursive level order traversal" << endl;
    int height =  BinaryTreeHeight(root, 0);

    for (int i = 0; i < height+1; i++){
        LevelOrderTraversal_R(root, i);
    }

    cout << endl << endl;

    cout << "Recursive preorder traversal" << endl;

    PreOrderTraversal_R(root);

    cout << endl << endl;

    cout << "Iterative preorder traversal" << endl;

    PreOrderTraversal_I(root);

    cout << endl << endl;

    cout << "Recursive inorder traversal" << endl;

    InOrderTraversal_R(root);

    cout << endl << endl;

    cout << "Iterative inorder traversal" << endl;

    InOrderTraversal_I(root);

    cout << endl << endl;

    cout << "Recursive postorder traversal" << endl;

    PostOrderTraversal_R(root);

    cout << endl << endl;

    cout << "Iterative postorder traversal" << endl;

    PostOrderTraversal_I(root);

    cout << endl << endl;

    return 0;
}
