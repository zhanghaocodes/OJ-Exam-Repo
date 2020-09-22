#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

const int maxn=2e5+100;
int num[maxn];
ll f[maxn];
void modefy(int l,int r,int x)
{
	f[l]+=x;
	f[r+1]-=x;
}
int n,m;
int main()
{
	while(cin>>n>>m)
	{
	    for(int i=1;i<=m;i++)
		cin>>num[i];
        for(int i=1;i<=m-1;i++)
        {
            int l=num[i];
            int r=num[i+1];
            if(l==r)
                continue;
            if(l>r)
                swap(l,r);
            modefy(1,l-1,r-l);
            modefy(l,l,r-1);
            modefy(l+1,r-1,r-l-1);
            modefy(r,r,l);
            modefy(r+1,n,r-l);
        }
        for(int i=1;i<=n;i++)
        {
            f[i]+=f[i-1];
            cout<<f[i]<<" ";
        }
        cout<<endl;
	}
}
