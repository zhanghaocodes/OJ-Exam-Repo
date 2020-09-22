#include <iostream>
using namespace std;

int main()
{
	int n;
	char s[101];
	cin >> n;
	cin >> s;
	char tg[2];
	int maxsize = 0;

	for (int i = 0; i < strlen(s)-1; i++)
	{
		int tmp = 0;
		for (int j = 0; j < strlen(s)-1; j++)
		{
			if (s[i] == s[j] && s[i + 1] == s[j + 1])
				tmp += 1;
		}
		if (tmp > maxsize)
		{
			maxsize = tmp;
			tg[0] = s[i];
			tg[1] = s[i + 1];
		}
	}
	for(int i=0;i<2;i++)
		cout << tg[i];
	return 0;
}