#include <iostream>
using namespace std;

int dp[100];
int fibo(int n)
{
	if (n == 0) return 0;
	if (n == 1 || n == 2) return 1;
	if (dp[n]) return dp[n];
	return dp[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << fibo(n) << endl;
}