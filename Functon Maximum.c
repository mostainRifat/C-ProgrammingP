#include<stdio.h>

int maximum(int x,int y,int z)
{
    if (x>y && x>z)
        return x;
    else if(y>z && y>x)
        return y;

    return z;
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int m;
    m= maximum(a,b,c);

    printf("The maximum value is %d \n",m);

    return 0;
}
