#include <stdio.h>
int main()
{
    int temp,i,j,x,ans,y;
    int arr[5] [5];

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
             scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    int rowc,colc;

    if(x>2)
        rowc= x-2;
    else
        rowc = 2-x;

    if(y>2)
        colc= y-2;
    else
        colc = 2-y;

    ans = rowc+colc;
    printf("%d",ans);

    return 0;
}
