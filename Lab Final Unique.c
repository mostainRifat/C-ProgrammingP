#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    char s[n];
    int k=0;
    scanf("%s",s);

    for(i=0; i<n; i++)
    {
       int p=0;
        for(j=0; j<n; j++)
        {
            if(s[i]==s[j] && i!=j)
                p=1;
        }
        if(p==0)
            k++;
    }
    printf("%d",k);

    return 0;
}
