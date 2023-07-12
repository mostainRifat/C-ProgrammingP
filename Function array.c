#include<stdio.h>
int add_them(int n,int nums [ ])
{
   int sum=0,i;
   for(i=0;i<n;i++)
   {
       sum += nums[i];
   }
   return sum ;
}

int main()
{
    int arr[ ]={12,23,2,34,33,444,33};

    int sum = add_them(7,arr);
    printf("The sum is %d \n",sum);
    return 0;
}
