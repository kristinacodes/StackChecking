#include <iostream>
using namespace std;
#include "Stack.h"
int main()
{
	int ch, x;
	Stack nptr(5);

	while (1)
	{
		cout << "-------------------------------------------------";
		cout << "\n 1 - Push Data";
		cout << "\n 2 - Pop Data";
		cout << "\n 3 - Check to see if stack isFull";
		cout << "\n 4 - Check to see if stack isEmpty";
		cout << "\n 5 - Count current elements in stack";
		cout << "\n 6 - Exit Program\n";
		cout << "\nEnter your choice(1-6):> ";
		cin >> ch;
		cout << "\n-------------------------------------------------";

		switch (ch) {
		case 1: cout << "\nEnter data:> ";
			cin >> x;
			if (nptr.push(x))
				cout << x << " has been pushed to the stack.\n";
			else
				cout << "\n*****Stack is full******\n";
			break;

		case 2:
			x = nptr.pop();
			cout << "\nPOP value is " << x << endl;
			break;

		case 3:
			if (nptr.isFull())
			{
				cout << "\n ********************************** ";
				cout << "\n The Stack is full";
				cout << "\n ********************************** \n";
			}
			else {
				cout << "\n ********************************** ";
				cout << "\n The Stack is NOT full";
				cout << "\n ********************************** \n";
			}
			break;
		case 4:
			if (nptr.isEmpty())
			{
				cout << "\n ********************************** ";
				cout << "\n The stack is Empty";
				cout << "\n ********************************** \n";
			}
			else {
				cout << "\n ********************************** ";
				cout << "\n The stack is NOT Empty";
				cout << "\n ********************************** \n";
			}
			break;
		case 5:
			nptr.status();
			break;
		case 6:
			exit(0);

		default: cout << "\nWrong choice, please try again.\n";
		}
	}

	return 0;

}