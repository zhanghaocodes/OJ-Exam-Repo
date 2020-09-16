/**
题目大意：用最多N-1次操作获得字典序最小的排列
思路：深度优先遍历，保存交换某一位之后的结果和交换前作比较，保存最小结果
*/
#include <iostream>

using namespace std;
const int maxn = 105;
int q;
char p[maxn];

//交换第i和第i+1个数字的位置
void swapi(int i)
{
    char t = p[i];
    p[i] = p[i+1];
    p[i+1] = t;
}
int main()
{
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        for(int i = 1;i<=n;i++)
        {
            cin>>p[i];
        }
    }
    return 0;
}
