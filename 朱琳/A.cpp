#include <iostream>
using namespace std;
long long co[101];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> co[i];
	}
	long long min_cost = 1E9;
	for (int i = 0; i < n; i++)
	{
		int cost = 0;
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			if (abs(co[j] - co[i]) % 2 != 0)
			{//移动2的倍数步不能到
				cost += 1;
			}
		}
		if (cost < min_cost)
			min_cost = cost;	
	}
	cout << min_cost;
	return 0;
}