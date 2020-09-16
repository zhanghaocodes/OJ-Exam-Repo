#include<iostream>
#include<vector>
using namespace std;

const int maxn = 103;
int p[maxn];
int pos[maxn];
bool used[maxn];

void op(int num)
{
	int initpos = pos[num];
	/*if (initpos - 1 < num)
	{
		used[initpos - 1] = true;
		return;
	}*/
	for (int i = initpos - 1; i >= num; i--)
	{
		if (used[i] == true)
			break;
		swap(p[i], p[i + 1]);
		swap(pos[p[i]], pos[p[i + 1]]);
		used[i] = true;
	}
	
}

int main()
{
	
	int q;
	cin >> q;
	vector<vector<int> > ans(q);
	for (int t = 0; t < q; t++)
	{
		int len;
		cin >> len;
		memset(used, 0, sizeof(used));
		for (int i = 1; i <= len; i++)
		{
			cin >> p[i];
			pos[p[i]] = i;
		}
		for (int num = 1; num <= len; num++)
		{
			if (pos[num] <= num)
				continue;
			op(num);
			used[pos[num]] = true;
		}
		ans[t] = vector<int>(len);
		for (int i = 0; i < len; i++)
			ans[t][i] = p[i + 1];
	}
	for (int t = 0; t < q; t++)
	{
		for (int i = 0; i < ans[t].size()-1; i++)
			cout << ans[t][i] << " ";
		cout << ans[t][ans[t].size() - 1];
		cout << endl;
	}
	return 0;
}