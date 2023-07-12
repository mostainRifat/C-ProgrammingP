#include<stdio.h>
struct comp
{
    double real;
    double img;
};
void printcomp(struct comp c)
{
    printf("%.2lf + %.2lfi",c.real,c.img);
}
struct comp addComp(struct comp a, struct comp b)
{
    struct comp ans;
    ans.real=a.real+b.real;
    ans.img=a.img+b.img;
    return ans;
};
struct comp multiComp(struct comp a,struct comp b)
{
    struct comp ans;
    ans.real = a.real*b.real - a.img*b.img;
    ans.img = a.real*b.img + a.img*b.real;
    return ans;
};
int main()
{
    struct comp c1 = {5.9,3.1};
    struct comp c2 = {-3.4,2.7};
    printcomp(multiComp(c1,c2));

    return 0;
}
