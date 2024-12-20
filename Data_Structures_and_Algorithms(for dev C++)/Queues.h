#ifndef _QUEUES_H
#define _QUEUES_H
#include "Stacks and Queues.h"

using namespace std;

struct Queue{
    Node *front;
    Node *end;
};

Queue *initializeQ();
void enqueue(Queue *q, BSTNode *bstNode);
void dequeue(Queue *q);

#endif