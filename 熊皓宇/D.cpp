#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> myQueue;

int main()
{
    int n;
    double a[200000];
    double b[200000];
    double result[200000];
    a[0]=1;
    b[0]=3;
    a[1]=2;
    b[2]=6;
    result[0]=a[0]/b[0];
    result[1]=a[1]/b[1];
    if(result[0]-result[1]<0.0000000000001)//精度计算问题
        cout<<1<<endl;
    while(n--)
    {

    }


    return 0;
}
