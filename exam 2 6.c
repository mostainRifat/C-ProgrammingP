#include<stdio.h>
int main()
{
    int i,j,t,m;

    scanf("%d",&t);
    long long int arr[105];

if(0 < t <= 100 && 0 < arr[i] <= 10^5)
{
    for(i=1;i<=t;i++)
        scanf("%lld",&arr[i]);

     for(i=1;i<=t;i++)
     {
         for(j=2;j<=arr[i]/2;j++)
         {
             m=0;

             if(arr[i]%j==0 || arr[i]==1)
             {
                m=1;
                break;
             }
         }
         if(m==0)
            printf("Yes\n");
         else
            printf("No\n");
     }

}

    return 0;
}
