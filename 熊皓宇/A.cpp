#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int L,v,l,r;
        cin>>L>>v>>l>>r;
        if(v<L||v==L)
        {
            int num=L/v-(r/v-l/v);
            if(l%v==0)
                num--;
            cout<<num<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
























