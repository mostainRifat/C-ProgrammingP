#include<stdio.h>

int median(int m, int thm[ ]);
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);

    int arr[n+5];

    for(i=0; i<n; i++)
    {
        scanf("%d ", &arr [i]);
    }

    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i] =arr [i+1];
                arr[i+1] = temp;
            }
        }
    }
     printf("The sorted array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr [i]);
    }
    printf("\nThe median value: %d ",median(n,arr[i]));

    return 0;
}
int median(int m,int thm[] )
{

    if(m%2!=0)
    {
        return thm [(m+1)/2];
    }
    if(m%2==0)
        return (thm[m]+thm[m+1])/2;
}


