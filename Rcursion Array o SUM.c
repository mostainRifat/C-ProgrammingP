#include<stdio.h>
int solve(int arr[],int n)
{
    if(n==0)
        return 0;
    int s= solve(arr+1,n-1);
    return s+arr[0];
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int s=solve(arr,n);
    printf("%d",s);
    return 0;
}
