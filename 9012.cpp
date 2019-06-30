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
	int many; string str; string con;

	cin >> many;
	for (int i = 0; i < many; i++)
	{
		con = "";
		Stack* s = new Stack;
		cin >> str;
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == '(')
				s->push(0);

			if (str[j] == ')')
			{
				if (s->empty())
				{
					con = "NO";
					break;
				}
				else
					s->pop();
			}
		}

		if (con == "NO")
			cout << con << endl;

		else if (s->empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		delete s;
	}
}