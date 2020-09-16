#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    const int maxn = 100010;
    int n, m, ai, bi;
    scanf("%d %d", &n, &m);
    int total = 0;  //压缩前总大小
    int totcomp = 0;    //压缩后总大小
    int diff[maxn]; //压缩前后的差值
    for (int i=0; i<n; i++) {
        scanf("%d %d", &ai, &bi);
        total += ai;
        totcomp += bi;
        diff[i] = ai - bi;
    }
    if (total <= m) {   //如果压缩前的大小就小于m时，直接输出
        printf("0");
        return 0;
    }
    if (totcomp > m) {  //如果压缩后的大小还是大于m时，直接输出
        printf("-1");
        return 0;
    }
    int need = total - m;   //距离全部放进磁盘还差多少空间
    sort(diff, diff+n); //把差值从小到大排序
    int totdiff = 0, count = 0;
    for (int i=n-1; i>=0; i--) {    //把压缩前后的差值从大到小相加，到可以放进磁盘时停止，计算此时共压缩了多少文件
        totdiff += diff[i];
        count++;
        if (totdiff >= need) {
            break;
        }
    }
    printf("%d", count);
    // 下面这些本来是想用动态规划做的，结果还是超时
    // int arr[maxn][maxn];
    // for (int i=0; i<n; i++) {
    //     for (int j=1; j<=n; j++) {
    //         if (i == 0) {
    //             arr[i][j] = diff[i];
    //         }
    //         else {
    //             int last = arr[i-1][j];
    //             int now = diff[i] + arr[i-1][j-1];
    //             arr[i][j] = max(last, now);
    //         }
    //     }
    // }
    // int count = -1;
    // for (int i=1; i<=n; i++) {
    //     if (arr[n-1][i] >= need) {
    //         count = i;
    //         break;
    //     }
    // }
    // printf("%d", count);
    return 0;
}
