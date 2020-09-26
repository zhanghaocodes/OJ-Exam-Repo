#include <stdio.h>
#define max(a, b) a > b ? a : b
#define min(a, b) a > b ? b : a
const int INF = 1e5;
int main()
{
    int T, n, f1, f2, f3, f4, i, j, x, y, minx, miny, maxx, maxy;
    scanf("%d", &T);
    while (T--)
    {
        minx = -INF;
        miny = -INF;
        maxx = INF;
        maxy = INF;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d%d%d%d%d%d", &x, &y, &f1, &f2, &f3, &f4);
            if (!f1)
                minx = max(minx, x);
            if (!f2)
                maxy = min(maxy, y);
            if (!f3)
                maxx = min(maxx, x);
            if (!f4)
                miny = max(miny, y);
        }
        if (minx > maxx || miny > maxy)
            printf("0\n");
        else
            printf("1 %d %d\n", maxx, maxy);
    }
    return 0;
}

