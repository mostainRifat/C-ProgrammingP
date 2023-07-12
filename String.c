#include<stdio.h>
int main()
{
    int m=0;
    char sen [1000];

    //scanf("%s",sen);
    //gets(sen);

    fgets(sen,sizeof(sen),stdin);

    int i=0;
    while(sen[i]!='\0')
    {
        if(sen[i]=='a')
            m++;
        else if(sen[i]=='e')
            m++;
        else if(sen[i]=='i')
            m++;
        else if(sen[i]=='o')
            m++;
        else if(sen[i]=='u')
            m++;

        i++;
    }

    printf("Total Vowel : %d",m);
    return 0;
}
