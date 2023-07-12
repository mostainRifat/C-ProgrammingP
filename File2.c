#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("input.txt","r");
    outputFile = fopen("output.txt","w");
    if(inputFile == NULL)
    {
        fprintf(outputFile,"NO file found");
        return 0;
    }

    int n;
    fscanf(inputFile,"%d",&n);
    int sum =0;
    for(int i=0;i<n;i++)
    {
        int a ;
        scanf("%d",&a);
        sum +=a;
    }
    fprintf(outputFile,"SUM --:> %d",sum);

    return 0;
}
