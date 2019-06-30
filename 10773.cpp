#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	int elem;
	Node* next = nullptr;
};

class Stack
{
public:
	Node* top = nullptr;
	int s = 0;

	bool empty();
	void push(int);
	int pop();
	void print();
	void size()
	{
		cout << s << endl;
	}
};

bool Stack::empty()
{
	return top == nullptr;
}

void Stack::push(int a)
{
	Node* temp = new Node;
	temp->elem = a;
	s++;

	if (empty())
	{
		top = temp;
		return;
	}

	temp->next = top;
	top = temp;
}

int Stack::pop()
{
	if (empty())
	{
		//cout << -1 << endl;
		return -1;
	}

	Node* temp = top;
	top = top->next;
	s--;
	//cout << temp->elem << endl;
	int num = temp->elem;
	delete temp;
	return num;
}

void Stack::print()
{
	if (empty())
		return;
	Node* temp = top;

	while (temp->next != nullptr)
	{
		cout << "|" << temp->elem
			<< "|" << endl;
		temp = temp->next;
	}

	cout << "|" << temp->elem
		<< "|" << endl << "---" << endl;
}

int main()
{
	int many, num;
	Stack s;
	cin >> many;
	for (int i = 0; i < many; i++)
	{
		cin >> num;

		if (num == 0)
			s.pop();

		else
			s.push(num);
	}
	int sum = 0;
	while (!s.empty())
	{
		sum += s.pop();
	}
	cout << sum << endl;
}