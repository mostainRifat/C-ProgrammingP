#include<stdio.h>
int main()
{
    int n,m=0,k,i;

    scanf("%d %d",&n,&k);

    int arr[n];

    if(1 <= n <= 100 && 0 <= k <= 100 && 0 <= m <= 100)
    {
        for(i=1;i<=n;i++)
       {
        scanf("%d",&arr[i]);
       }
       for(i=1;i<=n;i++)
       {
        if(arr[i]>k)
            m++;
       }
    }
    printf("%d",m);
    return 0;

    return 0;
}
