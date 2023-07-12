#include<stdio.h>
int main()
{
    int oc=0,ec=0,n,i;
    scanf("%d",&n);
    int arr [n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
           {
               ec++;
           }
           else
           {
               oc++;
           }
    }
    printf("The even %d\n", ec);
    printf("The odd %d",oc);
    return 0;
}
