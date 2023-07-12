#include<stdio.h>
int main()
{
    int n,i,j,s;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(s=i; s<n; s++)
            printf(" ");
        if(i%2 != 0)
        {
            for(j=1; j<=(2*i -1); j++)
                printf("^");
        }
        if(i%2 == 0)
        {
            for(j=1; j<=(2*i -1); j++)
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
