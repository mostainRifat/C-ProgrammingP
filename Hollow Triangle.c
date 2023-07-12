#include<stdio.h>
int main()
{
    int i,j;
    int n=15;

    printf("@ \n");

    for(j=1;j<(n-2);j++)
    {
        printf("@");
        for(i=1;i<=j-1;i++)
        {
            printf(" ");
        }
        printf(" @\n");
    }

    for(j=1;j<=n;j++)
    {
        printf("@");
    }

    return 0;
}
