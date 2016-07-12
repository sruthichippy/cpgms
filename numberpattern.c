#include<stdio.h>
int main()
{
  int i,j,k,s;
  scanf("%d",&s)
  k=1;
  for(i=1;i<=s;i+=2)
  {
    for(j=s;j>=1;j--)
    {
      if(j>i)
        printf(" ");
      else
        printf("%d ",k++);
    }
    printf("\n");
  }
  return 0;
