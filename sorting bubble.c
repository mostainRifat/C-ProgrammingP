#include<stdio.h>
int main()
{
    //Bubble sorting problem
    int n=11,i,j,temp;
    int arr[11] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    for(i=0; i<n; i++)
    {
        printf("%d ", arr [i]);
    }
    printf("\n");

    for(j=0; j<5; j++)
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


    for(i=0; i<n; i++)
    {
        printf("%d ", arr [i]);
    }
    printf("\n");

    return 0;
}

