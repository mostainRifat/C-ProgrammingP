#include<stdio.h>
void print_ptrn(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("#");
    }
    printf("\n");
}
int main()
{
    int i;
    for(i=1;i<=5;i++)
        print_ptrn(i);
    print_ptrn(7);
    return 0;
}
