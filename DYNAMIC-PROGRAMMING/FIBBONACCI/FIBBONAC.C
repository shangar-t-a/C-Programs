#include<stdio.h>
#include<conio.h>
static int count = 0,p[100],s;
int fib(int n)
  {
  if(p[n] != -1)
    return p[n];
  else
    {
    count++;
    if(n == 0)
     return 0;
    else if(n == 1)
     return 1;
    else
     {
     s = fib(n-1) + fib(n-2);
     p[n] = s;
     return s;
     }
    }
  }
int main()
  {
  int n,i,val;
  clrscr();
  scanf("%d",&n);
  for(i=0;i<n;i++)
    p[i] = -1;
  val = fib(n);
  printf("fib(%d) = %d\ncount = %d",n,val,count);
  getch();
  return 0;
  }
