#include<stdio.h>
int main()
{
    int i,j;
    float x,sum;
    for(i=1;i<=3;i++)
    {
        printf("Enter marks of %dth std = ",i);
        sum = 0.0;
        for(j=1;j<4;j++)
        {
            scanf("%f",&x);
            sum +=x ;
        }
       // avg= sum/3;

        printf("Avarage = %f \n",(sum/3));
    }
    return 0;
}
