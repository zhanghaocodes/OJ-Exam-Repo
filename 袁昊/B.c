#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a>b?a:b
#define MAX 300010
struct node{
    int l,r;
}arr[MAX];
int l[MAX],r[MAX];
int cmp(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int n,i,e,s,ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&arr[i].l,&arr[i].r);
        l[i]=arr[i].l;
        r[i]=arr[i].r;
    }
    qsort(l+1,n,sizeof(int),cmp);
    qsort(r+1,n,sizeof(int),cmp);
    for(i=1;i<=n;i++){
        e=l[n];
        s=r[1];
        if(e==arr[i].l) e=l[n-1];
        if(s==arr[i].r) s=r[2];
        ans=max(ans,s-e);
    }
    printf("%d\n",ans);
    return 0;
}
