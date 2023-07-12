#include<stdio.h>
#include<strings.h>
int main()
{
    int i;
    char s[100];
    fgets(s,sizeof(s),stdin);

    for(i=0; s[i]!='\0'; i++)
    {
        if(i%2 == 0)
            printf("%c",s[i]);
        if(i%2 !=0)
            printf("%c%c",s[i],s[i]);
    }
    return 0;
}
