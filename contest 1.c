#include<stdio.h>
int main()
{
    int i,j,t,n;
    int p=0,e=0;
    int arr[50];

    scanf("%d",&t);

    for (i=0; i<t; i++)
    {
        scanf("%d",&n);

        for(j=0; j<n; j++)
            scanf("%d",arr[j]);

        for(j=0; j<n; j++)
        {
            if (arr[j] == 72)
                e++;
            else if (arr[j]==84)
                p++;
        }
    }
    if(e>p)
        printf("England");
    else if(p>e)
        printf("Pakistan");




    return 0;
}
