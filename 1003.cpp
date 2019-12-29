#include <iostream>
using namespace std;

int zero[41] = { 1,0 };
int one[41] = { 0, 1 };

int dp_zero(int n)
{
	if (n == 0) return 1;
	if (n == 1) return 0;
	if (zero[n]) return zero[n];
	return zero[n] = dp_zero(n - 1) + dp_zero(n - 2);
}

int dp_one(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (one[n]) return one[n];
	return one[n] = dp_one(n - 1) + dp_one(n - 2);
}

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << dp_zero(n) << " "
			<< dp_one(n) << endl;
	}
}