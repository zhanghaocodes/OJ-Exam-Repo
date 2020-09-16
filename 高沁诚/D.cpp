#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;

//计算两个数的最大公约数
int gcd(int a, int b) {
    return (b==0) ? a : gcd(b, a%b);
}

int main() {
    const int maxn = 200010;
    int n;
    scanf("%d", &n);
    long double d;
    int a[maxn];
    int b[maxn];
    map<long double, int> m;    //map的key为可以使 d*a+b=0 的d，value为此时0的个数
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }

    int maxZero = 0;
    int extra = 0;
    for (int i=0; i<n; i++) {
        if (a[i]==0 ) { //当a和b都为0时，c=d*a+b肯定为0
            if (b[i]==0) extra++;
            continue;
        }
        int gcd1 = gcd(a[i], b[i]); //计算最大公约数
        //简化a和b使得 a/b 不能再被约分
        a[i] /= gcd1;
        b[i] /= gcd1;
        d = (long double)a[i] / b[i];   //计算d
        // if (m.find(d) == m.end()) {
        //     m[d] = 1;
        // }
        // else {
            m[d]++; //d对应的计数+1
        // }
    }
    for (auto it = m.begin(); it!= m.end(); it++) { //在map里找出最大的计数
        if (it->second > maxZero) maxZero = it->second;
    }

    printf("%d", maxZero + extra);
    return 0;
}
