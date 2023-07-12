#include<stdio.h>
int main()
{
    int n,j,k,i;
    scanf("%d",&n);
    int arr[n];

    if(1<=n<=20&&1<=i<=20&&0<=k<=20)
    {

    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&k);


    for(j=k+1;j<=n;j++)
            printf("%d ",arr[j]);

    for(i=1;i<=k;i++)
            printf("%d ",arr[i]);
    }


    return 0;
}

