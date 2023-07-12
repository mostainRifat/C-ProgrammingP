#include<stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s;
    printf("Enter Information: \nEnter name: ");
    scanf("%s",&s.name);
    printf("\nEnter Roll Number:");
    scanf("%d",&s.roll);
    printf("\nEnter marks:");
    scanf("%d",&s.marks);

    printf("Displaying Information:\n");
    printf("Name:%s\nRoll number:%d\nMarks:%d",s.name,s.roll,s.marks);

    return 0;
}
