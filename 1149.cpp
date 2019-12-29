#include <iostream>
#include <algorithm>
using namespace std;


int R[1001] = { 0 };
int G[1001] = { 0 };
int B[1001] = { 0 };
int street[1001] = { 0 };
int flag[1001] = { -1 };

int min(int a, int b, int c)
{
	return min(a, min(b, c));
}

int median(int a, int b, int c)
{
	int temp = min(a, b, c);
	if (temp == a) return min(b, c);
	if (temp == b) return min(c, a);
	if (temp == c) return min(a, b);
}

int saving(int n)
{
	if (n == 0) return 0;
	if (street[n]) return street[n];

	int temp = min(R[n], G[n], B[n]);
	if (temp == R[n]) flag[n] = 1;
	else if (temp == G[n]) flag[n] = 2;
	else if (temp == B[n]) flag[n] = 3;

	int temp2 = saving(n - 1);

	if (flag[n - 1] != flag[n])
	{
		street[n] = temp2 + temp;
	}

	else
	{
		//not same with flag of n-2
		//not same with flag of n
		//min of above
		if (flag[n - 2] == flag[n] || n == 2)
		{
			if (flag[n] == 1) temp2 = min(G[n - 1], B[n - 1]);
			else if (flag[n] == 2) temp2 = min(R[n - 1], B[n - 1]);
			else temp2 = min(G[n - 1], R[n - 1]);
		}

		else
		{
			if (flag[n - 2] + flag[n] == 4) temp2 = G[n - 1];
			else if (flag[n - 2] + flag[n] == 3) temp2 = B[n - 1];
			else temp2 = R[n - 1];
		}

		street[n] = min(saving(n-2) + temp2 + temp
			, saving(n-1) + median(R[n], G[n], B[n]));
		temp = median(R[n], G[n], B[n]);
		if (temp == R[n]) flag[n] = 1;
		else if (temp == G[n]) flag[n] = 2;
		else if (temp == B[n]) flag[n] = 3;
	}

	return street[n];	
}

int main()
{
	int n, r, g, b;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> r >> g >> b;
		R[i] = r;
		G[i] = g;
		B[i] = b;
	}

	cout << saving(n) << endl;

	cin >> n;
}

/*

8 - 2155
9 - 2617 - 462
*/