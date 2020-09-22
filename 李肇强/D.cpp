//#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<cmath>
#include<cstring>
#include<map>
#include<algorithm>
#define INF 0x3f3f3f3f
typedef long long ll;
using namespace std;
    

int main() {
    int t, x;
    cin>>t;
    while (t--) {
        int a[20][20];
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                scanf("%1d", &a[i][j]);
            }
        }
        a[1][1] = a[1][1] % 9 + 1;
        a[2][4] = a[2][4] % 9 + 1;
        a[3][7] = a[3][7] % 9 + 1;
        a[4][2] = a[4][2] % 9 + 1;
        a[5][5] = a[5][5] % 9 + 1;
        a[6][8] = a[6][8] % 9 + 1;
        a[7][3] = a[7][3] % 9 + 1;
        a[8][6] = a[8][6] % 9 + 1;
        a[9][9] = a[9][9] % 9 + 1;
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                printf("%d", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
