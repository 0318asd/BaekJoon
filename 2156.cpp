#include <iostream>
#include <algorithm>
using namespace std;

long long int wine[10055];
long long int dp[10055];

int max(int a, int b, int c)
{
	int temp = max(a, b);
	return max(temp, c);
}

long long int dp_ing(int n)
{
	if (n == 0) return 0;
	if (n == 1) return dp[1] = wine[1];
	if (n == 2) return dp[2] = wine[1] + wine[2];
	if (dp[n]) return dp[n];

	dp[n] = max(wine[n] + wine[n - 1] + dp_ing(n - 3),
		wine[n] + dp_ing(n - 2));
	dp[n] = max(dp[n], dp_ing(n-1));
	return dp[n];
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> wine[i];
	cout << dp_ing(n) << endl;
}
