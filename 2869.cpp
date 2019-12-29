#include <iostream>
using namespace std;



int fibonacci(int n) {
	if (n == 0) {
		zero++;
		return 0;
	}
	else if (n == 1) {
		one++;
		return 1;
	}
	else {
		return fibonacci(n?1) + fibonacci(n?2);
	}
}

int main()
{
	int t;
	int n;
	cin >> t;
	int one = 0, zero = 0;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		fibonacci(c);
		cout << zero << " " << one << endl;
		zero = 0;
		one = 0;
	}
}


