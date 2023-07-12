#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int* ptr;

    ptr =(int*) malloc(n*sizeof(int)); //Memory Allocation

    // ptr =(int*) calloc(n,sizeof(int)); //contiguous Allocation

    for(i=0; i<n; i++)
    {
        scanf("%d",(ptr+i));
    }

    for(i=0; i<n; i++)
    {
        printf("%d th position -> %d\n",i,*(ptr+i));
    }
    //ptr2= realloc(ptr,(n+5)*sizeof(int));
    free(ptr);

    return 0;
}
