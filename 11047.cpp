#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std;

bool c(int a, int b)
{
	return a > b;
}
int main()
{
	vector<int> v;
	int N, price, num;
	cin >> N >> price;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end(), c);

	int i = 0;
	int count = 0;
	while (true)
	{
		if (v[i] > price)
			i++;
		else
		{
			price -= v[i];
			count++;
		}
		if (price == 0)
			break;
	}
	cout << count << endl;

}