#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int N, num;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());
	
	int t = 0;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		t += v[i];
		sum += t;
	}
	
	cout << sum;

	
}