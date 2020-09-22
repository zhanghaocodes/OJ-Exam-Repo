#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int a[9][9];
int main()
{
	
	int t;
	cin >> t;
	while (t--)
	{
		memset(a, 0, sizeof(a));
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (i == j)
					a[i][j]++;
			}
		}
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}