#include<stdio.h>
int gcdd(int a,int b)
{
    int ans = 0;
    for(int i=a; i>=1; i--)
    {
        if (a%i == 0 && b%i==0)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{
    int i,j,t,n,k,p;

    scanf("%d",&t);
    for(int r=0; r<t; r++)
    {
        k=0;
        scanf("%d",&n);
        int arr[n+5];

        for(i=0; i<n; i++)
        {
            arr[i]=0;
            scanf("%d",&arr[i]);
        }

        for(i=0; i<n; i++)
        {
            p=0;
            for(j=0; j<n; j++)
            {
                p=gcdd(arr[i],arr[j]);

                if (p==1 && i!=j)
                k++;
            }
        }
        printf("%d\n",k);
    }

    return 0;
}
