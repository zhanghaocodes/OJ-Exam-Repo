//#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<cmath>
#include<cstring>
#include<map>
#include<algorithm>
#define INF 0x3f3f3f3f
typedef long long ll;
using namespace std;
const int N=200005;

ll a[N];
bool judge(int x, int y)
{
    if ((x > 0 && y > 0) || (x < 0 && y < 0)) return true;
    else return false;
}

int main(){
	//freopen("./in.txt","r",stdin);
	ios::sync_with_stdio(false); 
	
	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int i = 0, j = 0;
        ll sum = 0,num=0;     
        while (i < n)
        {
            j = i; 
            num = a[j]; 
            while (j + 1 < n && judge(a[j], a[j + 1]))
            {
                num = max(num, a[j + 1]); 
                j++;
            }
            i = j + 1;
            sum += num;
        }
        cout << sum << endl;
    }
	
	//system("pause");
    return 0;
}