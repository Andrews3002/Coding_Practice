#include<iostream>
#include "Stacks.h"
#include "Binary Search Tree.h"

using namespace std;

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