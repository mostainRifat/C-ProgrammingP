#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if( ( x% 400 ==0) || (x%4 ==0 && x%100 != 0)&&x>1900&&x<5000 )
        printf("Yes");
    else
        printf("No");
    return 0;
}
