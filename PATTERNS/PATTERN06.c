//PATTERN 6
#include <stdio.h>

int main(void) 
{
  int a,i,j,x;
  printf("Enter the number of lines\n");
  scanf("%d",&a); //number of lines
  j = 0; 
  while(j < a) //row loop
  {
  	i = a;
    while(i >= a-j) //column loop
    {
      printf("%d ",i);
      i = i - 1; 
    }
    printf("\n");
    j = j + 1; //outer loop 0 to n-1
  }
  return 0;
}
