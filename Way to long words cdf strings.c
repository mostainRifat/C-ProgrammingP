#include<stdio.h>
#include<strings.h>
int main()
{
    char name[1000];

    fgets(name,sizeof(name),stdin);

    int l = strlen(name) - 1;

    if(l>10)
    {
        printf("%c%d%c",name[0],l-2,name[l-1]);
    }
    else
    {
   // printf("%d",l);
    puts(name);
    }

    return 0;
}
