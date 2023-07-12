#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(1<=n<=20)
    {
        for (i=1;i<=n;i++)
        {
            for(j=i;j>=1;j--)
                {printf("%d",j);}
        printf("\n");
        }
    }


    return 0;
}
