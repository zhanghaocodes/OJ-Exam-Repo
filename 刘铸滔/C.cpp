//思路：贪心，每次内存不够时压缩压缩率最大的歌曲
#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>
using namespace std;

const int maxn = 100010;
int n,m;

//歌曲清单，按照压缩率排序
struct compress
{
    int a,b;
    compress(int _a=0,int _b=0):a(_a),b(_b) {}
    //按照压缩率排序,从大到小
    bool operator<(const compress &t)const
    {
        return (a-b)>(t.a-t.b);
    }
} songs[maxn];

int main()
{
    cin>>n>>m;
    for(int i = 1; i<=n; i++)
    {
        cin>>songs[i].a>>songs[i].b;
    }
    sort(songs+1,songs+n+1);
    int curmemry = 0;
    int compressi = 1;//当前压缩歌曲的下标
    int cptime = 0;//压缩次数
    for(int i = 1;i<=n;i++)
    {
        if(curmemry+songs[i].a<=m)
        {
            curmemry+=songs[i].a;
        }
        else{
            if(i>=compressi)//退回上一个未被压缩的歌曲
            {
                i--;
            }
            if(compressi>n)
            {
                cptime = -1;
                break;
            }
            curmemry-=songs[compressi].a;
            curmemry+=songs[compressi].b;
            compressi++;
            cptime++;
        }
    }
    cout<<cptime<<endl;
    return 0;
}
