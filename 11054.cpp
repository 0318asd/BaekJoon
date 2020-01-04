#include <iostream>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int front[1055] = { 0, 1 };
int back[1055];
int list[1055];
int dp[1055];

void dp_front(int n)
{
	int m;
	for (int i = 2; i <= n; i++)
	{
		m = 0;
		for (int j = 1; j < i; j++)
		{
			if (list[j] < list[i]) m = max(m, front[j]);
		}
		front[i] = m + 1;
	}
}

void dp_back(int n)
{
	back[n + 1] = 0;
	back[n] = 1;
	int m ;
	for (int i = n - 1; i >= 1; i--)
	{
		m = 0;
		for (int j = n; j > i; j--)
		{
			if (list[j] < list[i]) m = max(m, back[j]);
		}
		back[i] = m + 1;
	}
}

int main()
{
	int n;
	int m = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> list[i];
	dp_front(n); dp_back(n);
	for (int i = 1; i <= n; i++)
	{
		dp[i] = front[i] + back[i] - 1;
		m = max(m, dp[i]);
	}
	cout << m << endl;
}