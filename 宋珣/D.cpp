#include<iostream>
#include<vector>
#include<map>

using namespace std;
const int maxn = 200006;
double a[maxn];
double b[maxn];

int main()
{
	int n;
	cin >> n;
	int inzero = 0;
	map<double, int> times;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (b[i] == 0)
		{
			if (a[i] == 0)
				inzero++;
			else
			{
				times[0]++;
			}
			continue;
		}
		if (a[i] == 0)
			continue;
		times[-b[i] / a[i]]++;
	}
	int maxtimes = 0;
	for (auto iter = times.begin(); iter != times.end(); iter++)
	{
		if (iter->second > maxtimes)
			maxtimes = iter->second;
	}
	int ans = maxtimes + inzero;
	cout << ans;
	return 0;
}