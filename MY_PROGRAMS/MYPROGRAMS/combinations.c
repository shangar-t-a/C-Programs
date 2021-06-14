//USED TURBO C FOR CODING

#include<stdio.h>
#include<conio.h>
#define N 100

char stack[N];
int top = -1;
int count;
int n=0;

void print_stack()
{
	int i;
	for(i = 0 ; i < count ; i ++)
		printf("%c",stack[i]);
	printf("\n");
}

void pop()
{
	top = top - 1;
}

void push(char c)
{
	top = top + 1;
	stack[top] = c;
}

void combination(char arr[])
{
	int j = 0;
	char a[100];
	if(top == count-1)
	{
		print_stack();
	}
	while(arr[j] != '\0')
	{
		int k = 0;
		int itr = 0;
		push(arr[j]);
		while(arr[k] != '\0')
		{
			if(k != j)
			{
				a[itr] = arr[k];
				itr = itr + 1;
			}
			k = k + 1;
		}
		j = j + 1;
		combination(a);
	}
	pop();
}

void main()
{
	char num[100] = "1234";
	clrscr();
	count = 4;
	combination(num);
	getch();
}
