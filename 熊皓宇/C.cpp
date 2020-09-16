#include <iostream>
#include <queue>//queue<int> children; children.push() .pop() .front() .back()

using namespace std;

priority_queue<int> myQueue;

int main()
{
    int n,m;
    cin>>n>>m;
    long long sum=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        myQueue.push(a-b);
        sum+=a;
    }
    int num=0;
    while(sum>m&&(!myQueue.empty()))
    {
        sum-=myQueue.top();
        myQueue.pop();
        num++;
    }
    if(sum>m)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<num<<endl;
    }

    return 0;
}
