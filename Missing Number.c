#include<stdio.h>
int main()
{
    int n,x,i;
    int arr[2000];

    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        scanf("%d",&x);
        arr [x]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==0)
        {
            printf("Missing number %d", i);
            break;
        }
    }
    return 0;
}
