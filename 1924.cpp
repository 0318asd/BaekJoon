#include <iostream>
#include <iomanip>

using namespace std;

void what_week(int x, int y)
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = 0;
	for (int i = 0; i < x-1; i++)
	{
		day += month[i];
	}
	day += y;

	int week = day % 7;

	switch (week)
	{
	case 1:
		cout << "MON" << endl;
		break;
	case 2:
		cout << "TUE" << endl;
		break;
	case 3:
		cout << "WED" << endl;
		break;
	case 4:
		cout << "THU" << endl;
		break;
	case 5:
		cout << "FRI" << endl;
		break;
	case 6:
		cout << "SAT" << endl;
		break;
	case 0:
		cout << "SUN" << endl;
		break;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	what_week(a, b);
}
