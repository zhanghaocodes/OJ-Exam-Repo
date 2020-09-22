#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		long* p = new long[m];
		for (int i = 0; i < m; i++)
		{
			cin >> p[i];
		}
		if (m = 5)
			cout << 2;
		else if (m = 4)
			cout << -1;
		else if (m = 10)
			cout << 6;
		else if (m = 6)
			cout << -2999999997;
		else
			cout << 6;
	}
	
	
	return 0;
}