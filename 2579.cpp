#include <iostream>
using namespace std;

int stair[301];
int Max[301] = {};

int maxing(int n)
{
	if (n == 0) return 0;
	if (n == 1) return stair[1];
	if (n == 2) return stair[1] + stair[2];
	if (Max[n] != 0) return Max[n];
	return Max[n] =
		maxing(n - 3) + stair[n - 1] + stair[n] > maxing(n - 2) + stair[n] ?
		maxing(n - 3) + stair[n - 1] + stair[n] : maxing(n - 2) + stair[n];
}

int main()
{
	int t, n;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		stair[i] = n;
	}

	cout << maxing(t) << endl;
}
