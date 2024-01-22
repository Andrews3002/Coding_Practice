#include <iostream>

using namespace std;

struct BSTNode
{
    int data;

    BSTNode *left;
    BSTNode *right;
    BSTNode *parent;
};

struct Node
{
    BSTNode *node;
    Node *next;
};

struct Queue
{
    Node *front;
    Node *end;
};

struct Stack
{
    Node *top;
};

Stack *initializeS()
{
    Stack *s = new Stack;
    s->top = NULL;
    return s;
}

Queue *initializeQ()
{
    Queue *q = new Queue;
    q->front = NULL;
    q->end = NULL;
    return q;
}

void push(Stack *s, BSTNode *node)
{
    if (s->top == NULL)
    {
        s->top = new Node;
        s->top->node = node;
        s->top->next = NULL;
        return;
    }
    else
    {
        Node *newnode = new Node;
        newnode->node = node;
        newnode->next = s->top;
        s->top = newnode;
        return;
    }
}

BSTNode *pop(Stack *s)
{
    if (s->top == NULL)
    {
        return NULL;
    }

    if (s->top->next == NULL)
    {
        BSTNode *temp = s->top->node;
        delete (s->top);
        s->top = NULL;
        return temp;
    }
    else
    {
        BSTNode *temp = s->top->node;
        s->top = s->top->next;
        return temp;
    }
}

void enqueue(Queue *q, BSTNode *node)
{
    if (q->front == NULL)
    {
        Node *newnode = new Node;
        newnode->node = node;
        newnode->next = NULL;
        q->front = newnode;
        q->end = q->front;
        return;
    }
    else
    {
        Node *newnode = new Node;
        newnode->node = node;
        newnode->next = NULL;
        q->end->next = newnode;
        q->end = newnode;
        return;
    }
}

void dequeue(Queue *q)
{
    if (q->front == NULL)
    {
        return;
    }
    if (q->front == q->end)
    {
        int val = q->front->node->data;
        cout << val << " ";
        q->front = NULL;
        q->end = NULL;
        return;
    }
    else
    {
        int val = q->front->node->data;
        Node *temp = q->front;
        q->front = q->front->next;
        delete (temp);
        cout << val << " ";
        return;
    }
}

BSTNode *initializeBST(int value)
{
    BSTNode *newnode = new BSTNode;
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = NULL;

    return newnode;
}

void insertIntoBSt(BSTNode *root, int value)
{

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

BSTNode *sortedArrayToBST(int nums[], int length)
{
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

int BinaryTreeHeight(BSTNode *root, int height)
{
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

void LevelOrderTraversal_I()
{
}

void LevelOrderTraversal_R()
{
}

void PreOrderTraversal_R()
{
}

void PreOrderTraversal_I()
{
}

void InOrderTraversal_R()
{
}

void InOrderTraversal_I()
{
}

void PostOrderTraversal_R()
{
}

void PostOrderTraversal_I()
{
}

int main()
{

    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int length = sizeof(arr) / sizeof(int);

    BSTNode *root = sortedArrayToBST(arr, length);

    // cout << "Iterative level order traversal" << endl;
    // LevelOrderTraversal_I(root);

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
