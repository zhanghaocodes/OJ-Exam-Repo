#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long a[200001],max,sum=0,f1,f2;
	int t;
	cin>>t;
	int n;
	while (t--)
	{
		cin>>n;
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sum=0;
		for (int i=0;i<n;i++)
		{
			max=-10000000000;
			f1=0;
			f2=0;
			for (;i<n;i++)
			{
				if (a[i]>0)
				{
					f1=1;
				}
				else
				{
					f2=1;
				}
				if (f1&&f2)
				{
					i--;
					break;
				}

				if(max<a[i])
				{
					max=a[i];
				}
			}
			sum=sum+max;
		}
		cout<<sum;
	}
	return 0;
}
