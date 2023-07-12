#include<stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);

  if(a>b&&a>c&&a>d)
  {printf("Largest= %d\n",a);}
  if(a<b&&a<c&&a<d)
  {printf("Smallest=%d\n",a);}

  if(b>a&&b>c&&b>d)
  {printf("Largest = %d\n",b);}
  if(b<a&&b<c&&b<d)
  {printf("Smallest = %d\n",b);}

  if(c>a&&c>b&&c>d)
  {printf("Largest = %d\n",c);}
  if(c<a&&c<b&&c<d)
  {printf("Smallest=%d\n",c);}

  if(d>a&&d>b&&d>c)
  {printf("Largest = %d\n",d);}
  if(d<a&&d<b&&d<c)
  {printf("Smallest= %d",d);}

   return 0;
}
