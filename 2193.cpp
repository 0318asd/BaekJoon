#include <iostream>
using namespace std;

long long int dp[91];
long long int pinary(int n)
{
	if (n == 1 || n == 2) return 1;
	if (n == 3) return 2;
	if (dp[n]) return dp[n];
	return dp[n] = pinary(n-1) + pinary(n-2);
}


int main()
{
	int n;
	cin >> n;
	cout << pinary(n) << endl;
}