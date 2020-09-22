#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
   int n;
   char s[100];
   while(cin>>n)
   {
       for(int i=0;i<n;i++)
       {
           cin>>s[i];
       }
       int sum[100];
       for(int i=0;i<n;i++)
       {
           sum[i]=0;
       }
       for(int i=0;i<n-1;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(s[j]==s[i]&&s[j+1]==s[i+1])
                    sum[i]++;
           }
       }
       int maxid=0;
       for(int i=1;i<n;i++)
       {
           if(sum[i]>sum[maxid])
                maxid=i;
       }
       cout<<s[maxid]<<s[maxid+1];
   }
}
