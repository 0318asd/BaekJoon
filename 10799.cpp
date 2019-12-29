#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<char> s;
	string str;
	bool temp;
	int piece = 0;
	cin >> str;
	for (unsigned int i = 0; i < str.size(); i++)
	{
		if (str.at(i) == '(')
		{
			temp = true;
			s.push(str.at(i));
		}
		else if (str.at(i) == ')')
		{
			s.pop();
			if (temp == true)
				piece += s.size();
			else if(temp == false)
				piece++;
			temp = false;
		}
	}
	cout << piece << endl;
}