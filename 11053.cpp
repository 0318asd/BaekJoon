#include <iostream>
using namespace std;

int list[1055];
int dp[1055] = { 0, 1 };
int LIS(int n);

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> list[i];
	cout << LIS(n) << endl;;
}

int max(int a, int b)
{
	return a >= b ? a : b;
}

int LIS(int n)
{
	int m = 0;
	int M = 1;
	for (int i = 2; i <= n; i++)
	{
		int m = dp[0];
		for (int j = 1; j < i; j++)
		{
			if (list[j] < list[i]) m = max(dp[j], m);
		}
		dp[i] = m + 1;
		M = max(M, dp[i]);
	}
	return M;
}