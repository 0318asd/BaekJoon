#include <iostream>
using namespace std;

long long int dp[105][11];
void dp_ing(int n)
{
	for (int j = 2; j <= n; j++)
	{
		dp[j][0] = dp[j - 1][1];
		for (int i = 1; i <= 8; i++)
		{
			dp[j][i] = (dp[j - 1][i - 1] + dp[j - 1][i + 1])
				% 1000000000;
		}
		dp[j][9] = dp[j - 1][8];
	}
}

int main()
{
	for (int i = 1; i <= 9; i++) dp[1][i] = 1;
	int n;
	cin >> n;
	dp_ing(n);
	long long temp = 0;
	for (int i = 0; i <= 9; i++)
		temp += dp[n][i];
	cout << temp % 1000000000;
}