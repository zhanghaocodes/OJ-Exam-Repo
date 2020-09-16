/**
大致思路：经过分析，题目可以转化为ai/bi最多的相同数
可以构建邻接表，按照节点存储，
将后面节点ai/bi与前面节点ai/bi相同的节点存储在一个vector中
*/

#include <iostream>
#include <vector>
using namespace std;
const int maxn = 2000000;
const int INF = 0x3f3f3f3f;
struct node{
int a,b;
double c;
}e[maxn];
vector<double> g[maxn];
int main()
{
    int n;
    cin>>n;

    for(int i = 1;i<=n;i++)
    {
        cin>>e[i].a>>e[i].b;
        if(e[i].b = 0)
            e[i].c = -1.0;
        e[i].c = (double)e[i].a/e[i].b;
    }
    int i = 1;
    while(i<n)
    {
        for(int j = 1;j<=i;j++)
        {
            if(e[j].c==g[i])
            {
                g[i].push_back(e[j].c);
            }
            else
            {
                i++;
                g[i].push_back(e[j].c);
                continue;
            }
        }
        i++;
    }
    //遍历g,找到g[i].size()最大的一个，就是返回结果
    return 0;
}
