#include<stdio.h>
struct student
{
    int roll;
    char name;
    double marks;
};
void printstudent(int n,struct student s)
{
    printf("Information of Student %d\n",n);
    printf("Roll -->%d\n",s.roll);
    printf("Name-->%s\n",s.name);
    printf("Marks-->%lf\n",s.marks);
}
int main()
{
    int i;
    struct student cls[5];
    for(i=0; i<5; i++)
    {
        scanf("%d",&cls[i].roll);
        scanf("%s",&cls[i].name);
        scanf("%lf",&cls[i].marks);
    }
    for(i=0; i<5; i++)
    {
        if (cls[i].roll%2==0)
            printstudent(i,cls[i]);
    }
    return 0;
}
