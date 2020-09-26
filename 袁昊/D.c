#include <stdio.h>
#include <string.h>
int main()
{
    int T,n ,k;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%d%d",&n,&k);
        if (k % 3 != 0)
        {
            if (n % 3 != 0)
            {
                printf("Alice\n");
            }
            else
            {
                printf("Bob\n");
            }
        }
        else
        {
            int t = n % (k + 1);
            if (t % 3 != 0 || t == k)
            {
                printf("Alice\n");
            }
            else
            {
                printf("Bob\n");
            }
        }
    }
    return 0;
}
