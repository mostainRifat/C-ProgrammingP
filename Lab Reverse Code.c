#include<stdio.h>
int main()
{
    int t,i,temp,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        while(n>0)
        {
            temp = n%10;
            printf("%c",temp+64);
            n=n/10;
        }
        printf("\n");
    }
    return 0;
}
