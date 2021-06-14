//PATTERN 1
#include <stdio.h>

int main(void) 
{
  int a,i,j;
  printf("Enter the number of lines\n");
  scanf("%d",&a);
  j = 0;
  while(j<=a)
  {
    i = 0;
    while(i<=a)
    {
      printf("%d ",1);
      i = i + 1;
    }
    printf("\n");
    j = j + 1;
  }
  return 0;
}