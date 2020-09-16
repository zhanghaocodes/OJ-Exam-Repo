#include <iostream>
#include <queue>//queue<int> children; children.push() .pop() .front() .back()

using namespace std;

priority_queue<int> myQueue;//优先队列

int main()
{
    int n,m;
    cin>>n>>m;
    long long sum=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        myQueue.push(a-b);//把压缩的差值全部push到队列中
        sum+=a;
    }
    int num=0;
    while(sum>m&&(!myQueue.empty()))
    {
        sum-=myQueue.top();//减少最大的压缩差值
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
