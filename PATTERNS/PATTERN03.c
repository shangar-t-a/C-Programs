//PATTERN 3
#include <stdio.h>

int main(void) 
{
  int a,i,j;
  printf("Enter the number of lines\n");
  scanf("%d",&a);
  j = a;
  while(j>0)
  {
    i = 1;
    while(i<=j)
    {
      printf("%d ",1);
      i = i + 1;
    }
    printf("\n");
    j = j - 1;
  }
  return 0;
}