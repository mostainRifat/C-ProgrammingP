#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int arr[n];

    for (i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            if(arr[i]<arr[j])
        {
            k=arr[i];
            arr[i]=arr[j];
            arr[j]=k;
        }
    }
    for(i=1;i<=n;i++)
        printf("%d ", arr[i]);

    return 0;
}
