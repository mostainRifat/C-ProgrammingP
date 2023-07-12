#include<stdio.h>
void solve(int i,int n)
{
    if(i>n)
        return 0;
    printf("%d  ",i); //if we put the function before print recurtion will become reverse
    solve(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(1,n);
    return 0;
}
