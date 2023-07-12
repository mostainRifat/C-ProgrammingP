#include<stdio.h>
int main()
{
    int radious;
    printf("Enter the radious : ");
    scanf("%d",&radious);

    float area;
    area= 3.14*radious*radious;
    printf("The area is : %f ", area);

    return 0;
}
