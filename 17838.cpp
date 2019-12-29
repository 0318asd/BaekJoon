#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2 = "0000000";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str1;
		str2.at(0) = str1.at(0);
		str2.at(1) = str1.at(0);
		str2.at(2) = str1.at(2);
		str2.at(3) = str1.at(2);
		str2.at(4) = str1.at(0);
		str2.at(5) = str1.at(2);
		str2.at(6) = str1.at(2);

		if (str1 == str2 && str1.at(0) != str1.at(2))
			cout << 1 << endl;
		else cout << 0 << endl;
	}

}