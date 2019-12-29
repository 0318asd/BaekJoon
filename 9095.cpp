#include <iostream>
using namespace std;

int number[12];

int numbering(int n)
{
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 4;
	if (number[n]) return number[n];
	return number[n] = numbering(n - 1)
		+ numbering(n - 2) + numbering(n - 3);
}

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << numbering(n) << endl;
	}
}