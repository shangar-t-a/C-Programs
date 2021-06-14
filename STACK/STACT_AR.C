#include<stdio.h>
#include<conio.h>
#define N 5
int a[N],top = -1;
void push(int x)
{
  if(top >= N)
  {
    printf("Overflow\n");
  }
  else
  {
    top = top + 1;
    a[top] = x;
  }
}
void peek()
{
  printf("Top of Stack = %d\n",a[top]);
}
void pop()
{
  printf("Popped element = %d\n",a[top]);
  top--;
}
void display()
{
  int i = top;
  while(i != -1)
  {
    printf("%d\n",a[i]);
    i--;
  }
}
int main()
{
  int choice,con=1;
  clrscr();
  printf("1:push  2:pop  3:peek  4:display\n");
  while(con)
  {
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
   {
    int x;
    printf("Enter Element  ");
    scanf("%d",&x);
    push(x);
    break;
   }
  case 2:
   {
    pop();
    break;
   }
  case 3:
   {
    peek();
    break;
   }
  case 4:
   {
    display();
    break;
   }
  default:
   printf("Invalid\n");
  }
  printf("To continue 1  ");
  scanf("%d",&con);
  }
  getch();
  return 0;
}


