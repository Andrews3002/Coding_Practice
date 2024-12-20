#include<iostream>
#include "Queues.h"

using namespace std;

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
