#include<stdio.h>
int main()
{
  long int n,i,p[100];
  scanf("%ld",&n);
  p[0] = 1;
  p[1] = 1;
  for(i=2;i<n;i++)
    {
      p[i] = p[i-1] + p[i-2];
    }
  printf("fib(%ld) = %ld",n,p[n-1]);
  return 0;
}
