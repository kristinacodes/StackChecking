#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node(int data, Node* next = NULL)
	{
		this->data = data;
		this->next = next;
	}
};
class Stack
{
private:
	Node* front;
	int size;
	int count;
public:
	~Stack();
	Stack(int s);
	// push method to add data element
	bool push(int);
	// pop method to remove data element
	int pop();
	bool isFull();
	bool isEmpty();
	void status();


};


#endif // !STACK_H
