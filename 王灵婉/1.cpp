#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int t;
long long b,v,l,r,n;
int main()
{
	cin>>t;
	int i;
	while(t--)
	{
		cin>>b;
		cin>>v;
		cin>>l;
		cin>>r;
		n=0;
			if(l-v>0)
			{
				n++;
				n+=(l-v)/v;
				if(l%v==0)
				{
					n--;
				}
			}			
			i=r/v;
			i=(i+1)*v;			
			if(b-i>0)
			{
				n++;
				if(i%v==0&&b%v==0)n--;//10 3 4 5
				n+=(b-i)/v;
			}
			if(b%v==0&&b>r)
			{
				n++;
			}			
		cout<<n<<endl;	
	}	
} 
