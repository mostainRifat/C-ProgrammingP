#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    int age;
    float weight;
};

int main()
{

    int a;
    struct Student s1 = {.roll=12, .name="Rifat",.age=20, .weight=75.30};//Designated innitialization
    struct Student s2 = {12, "Rifat",20, 75.30};
//    s.roll = 12;
//   s.age=15;
//    s.weight=55.55;
    printf("Name=%s\nRoll =%d\nAge=%d\nWeight=%f",s.name,s.roll,s.age,s.weight);


    a=7;
    return 0;
}
