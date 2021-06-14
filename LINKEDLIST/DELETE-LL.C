#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head=0,*newnode,*temp,*prevnode,*nextnode;
int choice=1,count=1,choice1,list_count=0;
void create_node()
{
  newnode = (struct node *)malloc(sizeof(struct node));
  list_count++;
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
void display_LL()
{
  count = 1;
  choice = 0;
  temp = head;
  printf("            Addr   Data\n");
  while(temp != 0)
  {
    printf("Element %d = %d : %d\n",count,temp,temp->data);
    temp = temp -> next;
    count++;
  }
}
void delete_beg()
{
  if(head == 0)
    printf("No Node\n");
  else
  {
    temp = head;
    head = temp -> next;
    free(temp);
  }
}
void delete_end()
{
  prevnode = nextnode = head;
  while(nextnode -> next != 0)
  {
    prevnode = nextnode;
    nextnode = nextnode -> next;
  }
  prevnode -> next = 0;
  free(nextnode);
}
void delete_pos()
{
  int pos,i = 1;
  temp = head;
  printf("Enter Position\n");
  scanf("%d ",&pos);

  while (i < pos-1)
  {
    temp = temp -> next;
    i ++;
  }
  nextnode = temp -> next;
  temp -> next = nextnode -> next;
  free(nextnode);
}
int main()
{
  int select,con=1,pos,i=1;
  clrscr();
  printf("Enter operation\n");
  printf("1 : create LL\n2 : display\n3 : Delete(Beg)\n4 : Delete(pos)\n5 : Delete(end)\n");
  while(con == 1)
  {
  scanf("%d",&select);
  switch(select)
  {
    case 1:
    {
      while(choice != 0)
      {
	printf("Do you want to create node (Y=1/N=0)\n");
	scanf("%d",&choice);
	if(choice == 1)
		create_node();
      }
      break;
    }
    case 2:
    {
      printf("Do you want to trace Linked List (0/1)\n");
      scanf("%d",&choice1);
      if(choice1 == 1)
      {
	display_LL();
      }
      break;
    }
    case 3:
    {
      delete_beg();
      break;
    }
    case 4:
    {
      delete_pos();
      break;
    }
    case 5:
    {
      delete_end();
      break;
    }
    default:
      printf("Invalid");
  }
  printf("Do you want to continue (1/0)\n");
  scanf("%d",&con);
  }
  getch();
  return 0;
}

