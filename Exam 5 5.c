#include<stdio.h>
int main()
{
    int t,i,m;
    char c,

    scanf("%d",&t);
    int arr[105];

    for(i=1;i<=t;i++)
    {
        scanf("%d%c ", &arr[i],&c );
    }

    for(i=1;i<=t;i++)
    {
        m=0;
        if( 0<=arr[i] && arr[i]<60)
        {
            m= (60-arr[i])+100;
        }
        else if( 60<=arr[i] && arr[i]<80)
        {
             m = (80- arr[i])*2+60;
        }
        else
        {
            m = (100-arr[i])*3;
        }
    printf("%d minutes \n", m);

    }
    return 0;
}
