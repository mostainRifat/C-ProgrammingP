#include<stdio.h>
void findMaxMin(int n,int nums[],int* p,int* q)
{
    *p = nums[0];
    *q = nums[0];
    int i;
    for(i=0; i<n; i++)
    {
        if(nums[i]> *p)
            *p = nums [i];
        if(nums[i]< *q)
            *q = nums [i];
    }
}
int main()
{
    int arr[]= {12,3,43,4,21,56,9};
    int n=7;
    int maxx,minn;
    findMaxMin(n,arr,&maxx,&minn);

    printf("%d %d \n",maxx,minn);

    return 0;
}
