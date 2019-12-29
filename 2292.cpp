#include <iostream>
using namespace std;

//1
//6
//12
//18
//24
//....

int main()
{
	int n;
	cin >> n;
	//if (n == 1)
	//{
	//	cout << 1 << endl;
	//	return 0;
	//}
	n -= 1;
	int c = 1;
	for (int i = 6; n > 0; i += 6)
	{
		n -= i;
		c++;
	}
	cout << c << endl;
}