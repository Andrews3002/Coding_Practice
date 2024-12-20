#ifndef _STACKS_H
#define _STACKS_H
#include "Stacks and Queues.h"

using namespace std;

struct Stack{
    Node *top;
};

Stack *initializeS();
void push(Stack *s, BSTNode *bstNode);
BSTNode *pop(Stack *s);

#endif