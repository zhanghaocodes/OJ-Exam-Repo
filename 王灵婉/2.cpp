#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int n;
long long m,a[100010],b[100010],mmin=0,c[100010],mmax=0;
int main()
{
	memset(a,0,sizeof(a)); 
	memset(b,0,sizeof(b)); 
	cin>>n;
	cin>>m;
	int i=0,j=0,mymax=0,l=0;
	for(;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
		c[i]=a[i]-b[i];
		mmin+=b[i];
		mmax+=a[i];
	}
	if(mmin>m)
	{
		cout<<-1;
	}
	else if(mmax<m)
	{
		cout<<0;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			mymax=0;
			for(j=0;j<n;j++)
			{
				if(mymax<c[j])
				{
					mymax=c[j];
				}
			}
			mmax=mmax-mymax;
			c[j]=0;
			l++;
			if(mmax<m)
			{
				cout<<l;
				break;
			}
		}
	}
	
}

