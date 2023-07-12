#include<stdio.h>
int is_prime(int p)
{
    int i;
    for(i=2; i<p; i++)
    {
        if (p%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int i,j,t,l,r;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d",&l,&r);
        for(j=l; j<=r; j++)
        {
            int k=is_prime(j);
            if(k==1)
                printf("%d ",j);
        }

    }
    return 0;
}
