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


int main(){
	//freopen("./in.txt","r",stdin);
	ios::sync_with_stdio(false); 
	
	int n;
	cin>>n;
	//char s[105];
	string s;
	cin>>s;
	int ans = 0, cnt = 0;
	int index = 0;
	for(int i = 0; i < n-1; i++){
		cnt = 1;
		for(int j = i+1; j < n-1; j++){
			if(s[i] == s[j] && s[i+1] == s[j+1]){
				cnt++;
			}
		}
		if(cnt > ans){
			ans = cnt;
			index = i;
		}
	}
	//char a[2] = s[index];
	cout<<s.substr(index,2)<<endl;


	//system("pause");
	return 0;
}


