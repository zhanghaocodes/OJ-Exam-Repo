#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
long long a[200005];
vector<long long> results;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		memset(a, 0, sizeof(a));
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		long long sum = 0;
		long long maxa = a[0];
		for (int i = 0; i < n; i++)
		{
			if (a[i] * a[i + 1] > 0)
			{
				if (maxa < a[i + 1])
					maxa = a[i + 1];
			}
			else
			{
				sum += maxa;
				maxa = a[i + 1];
			}
		}
		results.push_back(sum);
	}
	for (int i = 0; i < results.size(); i++)
	{
		cout << results[i] << endl;
	}
	return 0;
}