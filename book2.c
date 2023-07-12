#include<stdio.h>
int main()
{
    int i,n;
    int fact=1;
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1)
    {
        fact= fact*i;
    }
    printf("%d",fact);

    return 0;
}
