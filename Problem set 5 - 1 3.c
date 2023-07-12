#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];

    for (i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2==1)
        sum = sum + arr[i];
    }
    if(sum%2==0)
        printf("Yes");
    else
        printf("No");

    return 0;
}
