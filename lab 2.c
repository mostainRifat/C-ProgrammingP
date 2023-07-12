#include<stdio.h>
int main()
{
    char s[20];
    int a,b,i,sum=0;
    gets(s);
    scanf("%d %d",&a,&b);

    for (i=0; s[i] != '\0'; i++)
    {
        sum=a (s[i]) b ;
        sum += sum;
    }

    pirntf("%d",sum);

    return 0;
}
