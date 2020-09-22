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

const int N=1e5+10;

int main(){
	//freopen("./in.txt","r",stdin);
	ios::sync_with_stdio(false); 
	int n, x;
	cin>>n;
	int res=0,cnt=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x%2==0) res++;
		else cnt++;
	}
	cout<<min(res,cnt)<<endl;

	//system("pause");
    return 0;
}