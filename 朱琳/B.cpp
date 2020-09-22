#include <iostream>
using namespace std;
#include <cstring>
#include <string>
int counts[101] = { 0 };
int main()
{
	int n;
	cin >> n;
	string s;
	cin>>s;
	int len = s.length();
	char ch1, ch2;
	for (int i = 0; i <len ; i++)
	{
		ch1 = s[i];
		ch2 = s[i + 1];
		int times = 1;
		for (int j = i+1; j < len; j++)
		{
			if (s[j] == ch1 && s[j + 1] == ch2)
			{
				times++;
			}
		}
		counts[i] = times;
	}
	int max_times = 0, max_i = 0;
	for (int i = 0; i < len; i++)
	{
		if (counts[i] > max_times)
		{
			max_times = counts[i];
			max_i = i;
		}
	}
	cout << s[max_i] << s[max_i + 1];
	return 0;
}