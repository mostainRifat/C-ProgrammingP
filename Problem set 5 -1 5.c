#include<stdio.h>
int main()
{
    int n,i,j,k,m=0;
    scanf("%d",&n);
    int arr[n];

    for (i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j !=0 )
           {
               k = 1;
               break;
           }
        }
        if(k=1)
            m++;
    }
    printf("%d", m);

    return 0;
}
