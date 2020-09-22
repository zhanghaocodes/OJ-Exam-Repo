#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long* p = new long[n];
	int coin = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (p[i] == 3)
			coin++;
	}
	cout << coin;
	return 0;
}
