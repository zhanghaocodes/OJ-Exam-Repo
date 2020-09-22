#include <iostream>
#include<algorithm>
using namespace std;


int main()
{
    int n;
    int x[100];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>x[i];
        sort(x,x+n);
        int sum[100];
        for(int i=0;i<n;i++)
            sum[i]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((x[j]-x[i])%2==0)
                    sum[i]+=0;
                else
                    sum[i]+=abs(x[j]-x[i]);
            }
        }
        sort(sum,sum+n);
        cout<<sum[0];
    }

}
