#include<stdio.h>

struct Student
{
    double weight;
    int roll;
};

int main()
{
    struct Student s= {.roll=12, .weight=64.54};
    //struct Student s2= {.roll=15, .weight=54.94};
    struct Student* sp;

    sp= &s;
    //printf("%p\n%p",sp,&s2);

    printf("%d %lf",sp->roll,sp->weight);

    return 0;
}
