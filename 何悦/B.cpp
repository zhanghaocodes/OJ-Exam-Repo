#include<cstdio>
#include<algorithm>
#include<cmath>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char str[100];
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	//hash
	int hash[27][27]={0}; 
	for(int i=0;i<n-1;i++)
	{
		hash[int(str[i])-64][int(str[i+1])-64]++;
	}
	int max=0;
	int resi=0;
	int resj=0;
	//寻找出现次数最多的子串 
	for(int i=1;i<=26;i++)
	{
		for(int j=1;j<=26;j++)
		{
			if(hash[i][j]>max)
			{
				max=hash[i][j];
				resi=i;
				resj=j;
			}
		}
	}
	cout<<char(resi+64)<<char(resj+64);
}
