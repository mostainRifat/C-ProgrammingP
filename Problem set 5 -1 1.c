#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[100];
    arr[1]=1;
    arr[0]=0;

    for (i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    printf("The fibonacci series ");

    for(i=0;i<=n;i++)
    {
         printf("%d ",arr[i]);
    }
    return 0;
}
