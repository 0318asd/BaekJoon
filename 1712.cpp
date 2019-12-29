#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	b -= c;

	if (b >= 0)
	{
		cout << -1 << endl;
		return 0;
	}

	cout << (a / (-1 * b)) + 1 << endl;
}

