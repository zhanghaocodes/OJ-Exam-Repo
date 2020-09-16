#include<iostream>
#include<algorithm>
using namespace std;
#define LL long long

const int maxn = 1e5 + 6;
int a[maxn];
int b[maxn];
int press[maxn];

int main()
{
	int n, m;
	cin >> n >> m;
	LL press_sum = 0;
	LL final_size = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		press[i] = a[i] - b[i];
		final_size += a[i];
		press_sum += b[i];
	}
	if (press_sum > m)
	{
		cout << -1;
		return 0;
	}
	sort(press, press + n);
	
	int need = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (final_size <= m)
			break;
		final_size -= press[i];
		need++;
	}
	cout << need;
	return 0;
}