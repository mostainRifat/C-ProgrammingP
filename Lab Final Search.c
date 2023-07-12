#include<stdio.h>

int main()
{
    int i,j,n,t,s,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        k=0;
        scanf("%d",&n);
        int arr[n];
        for(j=1; j<=n; j++)
            scanf("%d",&arr[j]);

        scanf("%d",&s);
        for(j=1; j<=n; j++)
        {
            if(arr[j] == s)
            {
                k += j;
                break;
            }
        }
        if(k==0)
            printf("Case %d: Not Found",i);
        if(k>0)
            printf("Case %d: %d",i,k);

        printf("\n");
    }
    return 0;
}
