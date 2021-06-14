//PATTERN 7
#include <stdio.h>

int main(void) 
{
  int a,i,j,space;
  printf("Enter the number of lines\n");
  scanf("%d",&a); //number of lines
  space = (a-1)*3;
  j = 0; 
  while(j < a) //row loop
  {
  	i = 0;
  	while(++i <= space)
  		printf(" ");
  	space = space - 3;
  	i = a; //i inner loop 1 to n
  	while(i >= a-j) //column loop
    {
      printf("%2d ",i);
      i = i - 1; 
    }
    printf("\n");
    j = j + 1; //outer loop 1 to n
  }
  return 0;
}
