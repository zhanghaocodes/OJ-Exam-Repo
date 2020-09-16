#include <iostream>

using namespace std;
const int maxn = 10000000;

int main()
{
    int t;
    long long L;
    int v,l,r;
    cin>>t;
    while(t--)
    {
        int cnt = 0;
        cin>>L>>v>>l>>r;
        for(int i=1; i<=L; i++)
        {
            if(i>=l&&i<=r)
            {
                continue;
            }
            if(i%v == 0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
