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
    int a,i;
    scanf("%d",&a);

    i=is_prime(a);

    if(i==1)
        printf("%d is Prime \n",a);

    if(i!=1)
        printf("%d not Prime \n",a);

    return 0;

}
