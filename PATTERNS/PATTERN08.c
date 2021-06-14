//PATTERN 8
#include <stdio.h>

int main(void) 
{
  int a,i,j,space;
  printf("Enter the number of lines\n");
  scanf("%d",&a);
  space = (a-1)*4;
  j = 1;
  while(j<=a)
  {
  	i =0;
  	while(++i <= space)
  		printf(" ");
  	space = space - 4;
    i = 1;
    while(i<=j)
    {
      printf("%3d ",i);
      i = i + 1;
    }
    printf("\n");
    j = j + 1;
  }
  return 0;
}
