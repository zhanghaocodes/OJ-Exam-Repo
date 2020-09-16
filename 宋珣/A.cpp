#include<iostream>
using namespace std;

const int maxn = 1e4 + 3;
int ans[maxn];

int main()
{
	int t;
	cin >> t;
	int L, v, left, right;
	for (int u = 0; u < t; u++)
	{
		cin >> L >> v >> left >> right;
		int lant = v;
		int leftpart, rightpart;
		leftpart = left / v;
		if (left % v == 0)
			leftpart--;
		rightpart = L / v - right / v;
			
		/*if ((L - right) % v == 0)
			rightpart--;*/
		ans[u] = leftpart + rightpart;
	}
	for (int u = 0; u < t; u++)
	{
		cout << ans[u] << endl;
	}
	return 0;
}

/*	while (lant <= L)
	{
		if (lant<left || lant>right)
			ans[u]++;
		lant += v;
	}*/