#include <iostream>
using namespace std;
int money[6] = { 500, 100, 50, 10, 5, 1 };

int main()
{
	int m, c = 0, idx = 0;
	cin >> m;
	m = 1000 - m;
	while (m >= 0)
	{
		while(m < money[idx]) idx++;
		m = m - money[idx];
		c++;
	}
	cout << c << endl;
}