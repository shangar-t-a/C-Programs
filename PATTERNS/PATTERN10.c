//PATTERN 10
#include <stdio.h>

int main(void) 
{
  int a,i,j,space;
  printf("Enter the number of lines\n");
  scanf("%d",&a);
  space = (a-1)*3;
  j = 1;
  while(j <= a)
  {
  	i = 0;
  	while(++i <= space)
  		printf(" ");
  		
  	space = space - 3;
  	
    i = j;
    while(i >= 1)
    {
      printf("%2d ",i);
      i = i - 1;
    }
    
	printf("\n");
    j = j + 1;
  }
  return 0;
}
