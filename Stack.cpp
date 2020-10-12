#include "Stack.h"
Stack::Stack(int s)
{
	size = s;
	count = 0;
	front = NULL;
}

bool Stack::push(int data)
{
	if (isFull())
		return false;
	// creating a new node
	Node* temp;
	temp = new Node(data);
	// add the node in front of list
	if (front == NULL)
	{
		temp->next = NULL;
	}
	else
	{
		temp->next = front;
	}
	front = temp;
	count++;
	return true;
}

int Stack::pop()
{
	// if empty
	int data = -1;
	if (isEmpty())
		return data;

	// delete the first element
	else
	{
		Node* temp = front;
		data = temp->data;
		front = front->next;
		delete temp;
		temp = NULL;
	}
	count--;
	return data;
}

bool Stack::isFull()
{
	if (count < size)
		return false;
	return true;
}
bool Stack::isEmpty()
{
	if (count == 0)
		return true;
	return false;
}
void Stack::status()
{
	cout << "\n************************* \n";
	cout << " Elements in stack are: " << count << endl;
	cout << " Max size is: " << size << endl;
	cout << "************************* \n";
}
Stack::~Stack()
{
	Node* curr = front, * next;
	while (curr != NULL)
	{
		next = curr->next;
		delete curr;
		curr = next;
	}
	front = NULL;
	size = 0;
	count = 0;
}