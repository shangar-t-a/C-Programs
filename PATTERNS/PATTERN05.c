//PATTERN 5
#include <stdio.h>

int main(void) 
{
  int a,i,j;
  printf("Enter the number of lines\n");
  scanf("%d",&a);
  j = 1;
  while(j<=a)
  {
    i = 1;
    while(i<=j)
    {
      printf("%d ",i);
      i = i + 1;
    }
    printf("\n");
    j = j + 1;
  }
  return 0;
}
