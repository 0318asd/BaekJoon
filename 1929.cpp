#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class prime
{
public:
	vector<int> p;
	prime()
	{
		p.push_back(2);
	}

	void add()
	{
		int con = 1;
		int num = p.back() + 1;
		while (true)
		{
			con = 1;
			for (unsigned int i = 0; p[i] <= num/2; i++)
			{
				if (num / p[i] == (double)num / p[i])
				{
					con = 0;
				}
			}

			if (con == 0)
				num++;
			else
			{
				p.push_back(num);
				return;
			}
		}
	}

	void print()
	{
		for (unsigned int i = 0; i < p.size(); i++)
		{
			cout << p[i] << " ";
		}
		cout << endl;
	}
	void A(int num)
	{
		if (num > p.back())
		{
			while (p.back() <= num)
			{
				add();
			}
		}
	}
	bool isPrime(int num)
	{
		if (num > p.back())
		{
			while (p.back() <= num)
			{
				add();
			}
		}
		for (unsigned int i = 0; i < p.size(); i++)
		{
			if (p[i] == num)
			{
				return 1;
			}
		}
		return 0;
	}
};

int main()
{
	int a, b, s = 0;
	cin >> a >> b;
	prime P;
	P.A(b);

	for (unsigned int i = 0; i < P.p.size(); i++)
	{
		if (P.p[i] >= a)
		{
			s = i;
			break;
		}
	}
	for (; P.p[s] < b; s++)
	{
		cout << P.p[s] << endl;	
	}
}