//PATTERN 11
#include <stdio.h>

int main(void) 
{
  int a,i,j;
  printf("Enter the number of lines\n");
  scanf("%d",&a); //number of lines
  j = 0; 
  while(j < a) //row loop
  {
  	i = a - j; //i inner loop 1 to n
    while(i <= a) //column loop
    {
      printf("%d ",i);
      i = i + 1; 
    }
    printf("\n");
    j = j + 1; //outer loop 1 to n
  }
  return 0;
}
