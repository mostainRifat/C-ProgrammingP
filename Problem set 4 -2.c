#include<stdio.h>
int main()
{
    int n,i,m=0;
    scanf("%d",&n);
    int arr[n];

    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==arr[i+1])
            m++;
    }
    if(m==n-1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
