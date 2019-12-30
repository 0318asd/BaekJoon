#include <iostream>
using namespace std;

int fibonacci[100];

int fibo(int n)
{
	if (n == 0) return 0;
	if (n == 2 || n == 1) return 1;
	if (fibonacci[n]!=0) return fibonacci[n];
	return fibonacci[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << fibo(n) << endl;
}