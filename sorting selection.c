#include<stdio.h>
int main()
{
    //selection sorting problem
    int n=8,i,j,min,m_ind;
    int arr[8] = {12,7,9,3,14,2,6,5};
    int sorted_arr[8];

    for(i=0; i<n; i++)
    {
        printf("%d ", arr [i]);
    }
    printf("\n");

     for(j=0;j<n;j++)
    {
        min = arr[0];
        m_ind = 0;
        for(i=0; i<n; i++)
        {
            if (arr[i]<min)
            {
                min = arr[i];
                m_ind = i;
            }

        }
        sorted_arr[j] = min;
        arr[m_ind] = 9999;

        for(i=0; i<n; i++)
        {
            printf("%d ", arr [i]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", sorted_arr [i]);
    }
    printf("\n");

    return 0;
}
