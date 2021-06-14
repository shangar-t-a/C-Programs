//PATTERN 4
#include <stdio.h>

int main(void) 
{
  int a,i,j,count;
  printf("Enter the number of lines\n");
  scanf("%d",&a);
  j = count = 1;
  while(j<=a)
  {
    i = 1;
    while(i<=j)
    {
      printf("%3d ",count);
      i = i + 1;
			count = count + 1;
    }
    printf("\n");
    j = j + 1;
  }
  return 0;
}
