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
const int maxn = 200005;

int num[maxn];
ll f[maxn];
void fun(int l,int r,int x)
{
    f[l]+=x;
    f[r+1]-=x;
}
int main()
{
	int n, m;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=m; i++)
        scanf("%d",&num[i]);
    for(int i=1; i<=m-1; i++)
    {
        int l=num[i];
        int r=num[i+1];
        if(l==r)
            continue;
        if(l>r)
            swap(l,r);
        fun(1,l-1,r-l);
        fun(l,l,r-1);
        fun(l+1,r-1,r-l-1);
        fun(r,r,l);
        fun(r+1,n,r-l);
    }
    for(int i=1; i<=n; i++)
    {
        f[i]+=f[i-1];
		if(i != n)
			printf("%I64d ",f[i]);
		else
			printf("%I64d\n",f[i]);
    }
	//system("pause");
    return 0;
}