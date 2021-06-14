#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head,*newnode,*temp;
void create_node()
{
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter Data\n");
  scanf("%d",&newnode->data);
  newnode->next = 0;
  if(head == 0)
  {
    head = temp = newnode;
  }
  else
  {
    temp->next = newnode;
    temp = newnode;
  }
}
int main()
{
  int choice=1,count=1,choice1;
  head = 0;
  clrscr();
  while(choice != 0)
  {
    create_node();
    count++;
    printf("Do you want to create node : %d (Y=1/N=0)\n",count);
    scanf("%d",&choice);
  }
  count = 1;
  choice = 0;
  printf("Do you want to trace Linked List (0/1)\n");
  scanf("%d",&choice1);
  if(choice1 == 1)
  {
    temp = head;
    while(temp != 0)
    {
      printf("Element %d = %d : %d\n",count,temp,temp->data);
      temp = temp->next;
      count++;
    }
  }
  getch();
  return 0;
}

