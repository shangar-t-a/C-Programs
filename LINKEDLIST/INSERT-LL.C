#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head=0,*newnode,*temp;
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
int main()
{
  int select,con=1,pos,i=1;
  clrscr();
  printf("Enter operation\n");
  printf("1 : create LL\n2 : display\n3 : Insert(Beg)\n4 : Insert(pos)\n5 : Insert(end)\n");
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
      temp = head;
      newnode = (struct node *)malloc(sizeof(struct node));
      printf("Enter data\n");
      scanf("%d",&newnode -> data);
      newnode -> next = head;
      head = newnode;
      break;
    }
    case 4:
    {
      printf("Enter the position to insert\n");
      scanf("%d",&pos);
      if(pos>list_count)
      {
	printf("Invalid");
      }
      else
      {
	temp = head;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode -> data);
	while(i<pos)
	{
		temp = temp -> next;
		i++;
	}
	newnode -> next = temp -> next;
	temp -> next = newnode;
      }
      break;
    }
    case 5:
    {
      temp = head;
      newnode = (struct node *)malloc(sizeof(struct node));
      printf("Enter data\n");
      scanf("%d",&newnode -> data);
      while(temp -> next != 0)
      {
	temp = temp->next;
      }
      newnode -> next = 0;
      temp -> next = newnode;
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

