#include<iostream>

using namespace std;

class Node{
public: 
	int Value;
	Node* nextadd;
};

void printlist(Node* head){
	Node* node = head;
	while (node != NULL){
		cout << node->Value << endl;
		node = node->nextadd;
	}
}

void insertNewHead(Node* *head, int value){
	Node* newnode = new Node();
	newnode->Value = value;
	newnode->nextadd = *head;
	*head = newnode;
	
}

void insertNewEnd(Node* *head, int value){
	Node* newnode = new Node();
	newnode->Value = value;
	newnode->nextadd = NULL;
	
	if (*head == NULL){
		*head = newnode;
		return;
	}
	
	Node* prev = *head;
	while (prev->nextadd != NULL){
		prev = prev->nextadd;
	}
	
	prev->nextadd = newnode;
	
}

void insertAfter(Node* prev, int value){
	if (prev == NULL){
		cout << "cannot add value after an empty node" << endl;
		return;
	}
	
	Node* newnode = new Node();
	newnode->Value = value;
	
	newnode->nextadd = prev->nextadd;
	prev->nextadd = newnode;
	
}

int main (){
	
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();
	
	head->Value = 1;
	head->nextadd = second;
	second->Value = 3;
	second->nextadd = third;
	third->Value = 5;
	third->nextadd = fourth;
	fourth->Value = 7;
	fourth->nextadd = NULL;
	
	insertAfter(head, 2);
	insertAfter(second, 4);
	insertAfter(third, 6);
	insertNewHead(&head, 0);
	insertNewEnd(&head, 8);
	
	
	printlist(head);
	
	
	
	
	return 0;
}
