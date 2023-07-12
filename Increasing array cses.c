#include<stdio.h>
int main()
{
    int n,i,move=0,arr[200007];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            move +=  arr[i-1] - arr[i];
            arr[i]=arr[i-1];
        }
    }
    printf("Total move = %d",move);
    return 0;
}
