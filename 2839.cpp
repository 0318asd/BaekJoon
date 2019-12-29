#include <iostream>
using namespace std;

int main()
{
	int five = 0, three = 0, n;
	cin >> n;
	while (n % 5 != 0)
	{
		n -= 3;
		three++;
		if (n < 0)
		{
			cout << -1 << endl;
			return 0;
		}
	}
	five = n / 5;
	cout << five + three << endl;
}

