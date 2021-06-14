#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
  int data;
  struct stack *next;
};
struct stack *top,*newnode,*top = 0;
void push(int x)
{
  newnode = (struct  stack*)malloc(sizeof(struct stack));
  newnode -> data = x;
  newnode -> next = top;
  top = newnode;
}
void pop()
{
  printf("Popped = %d : %d\n",top,top -> data);
  newnode = top;
  top = newnode -> next;
  free(newnode);
}
void peek()
{
  printf("Top of Stack = %d : %d\n",top,top->data);
}
void display()
{
  newnode = top;
  while(newnode != 0)
  {
    printf("%d : %d  ",newnode,newnode -> data);
    newnode = newnode -> next;
  }
  printf("\n");
}

int main()
{
  int choice,con=1;
  clrscr();
  printf("1:push  2:pop  3:peek  4:display\n");
  while(con)
  {
  printf("choice :  ");
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