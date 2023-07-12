#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);

    if(n==1)
        printf("1");
    else
    {
        for(i=1; i<=n; i++)
            printf("%d",i);

        printf("\n");
        for (j=2; j<n; j++)
        {
            for(i=1; i!=2; i++)
                printf("%d",j);
            for(i=2; i<n; i++)
                printf(" ");
            for(i=n; i<n+1; i++)
                printf("%d \n",n);
        }

        for(i=0; i<n; i++)
            printf("%d",n);
    }

    return 0;
}
