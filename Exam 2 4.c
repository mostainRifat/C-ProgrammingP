#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d",&n);
    int arr[n];
    arr[1]=0;
    m = arr[1];

    if(1<=n<=100 && 0<=m<=100)
    {

        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=1;i<=n;i++)
        {
            if( arr[i]>m )
            m= arr[i];
        }
        for(i=1;i<=n;i++)
        {
            printf("%d ",(m-arr[i]));
        }
    }

    return 0;
}

