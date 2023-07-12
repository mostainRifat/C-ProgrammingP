#include<stdio.h>
int main()
{
    int n,m=0,k,i,j;
    scanf("%d",&n);

    int arr[n];

    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=1;i<=n; i++)
    {
        for(j=1;j<=n;j++)
        {
        if( arr[i] + arr[j] == k )
          m++;
        }
    }
    if(m>1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
