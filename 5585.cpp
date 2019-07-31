#include <iostream>
using namespace std;

int money(int coast, int count)
{
	if (coast >= 500)
		return money(coast - 500, ++count);
	else if (coast >= 100)
		return (money(coast - 100, ++count));
	else if (coast >= 50)
		return (money(coast - 50, ++count));
	else if (coast >= 10)
		return (money(coast - 10, ++count));
	else if (coast >= 5)
		return (money(coast - 5, ++count));
	if (coast >= 1)
		return ++count;
	if (coast == 0)
		return count;
}

int main()
{
	int a;
	cin >> a;
	cout << money(1000-a, 0);
}