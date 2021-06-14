#include<stdio.h>

void swap(int *first_num,int *second_num)
{
	int temp;
	temp = *first_num;
	*first_num = *second_num;
	*second_num = temp;
}

void bubbleSort(int arr[],int size)
{
	int i,j,flag;
	for(i = 0 ; i < size - 1 ; i ++)
	{
		flag = 0;
		for(j = 0 ; j < size - j - 1 ; j ++)
		{
			if(arr[j] < arr[j+1])
			{
				flag = flag + 1;
				swap(&arr[j] , &arr[j+1]);	
			}
		}
		if(flag == 0)
			break;
	}
}


void CalcMaxRoom(int m , int n , int k , int f[])
{
	int on[100],off[100];
	int i,j = 0,l = 0;
	int t=0;//temporary iterator
	for(i = 0 ; i < m ; i ++)
	{
		if(f[i] > f[i]-n)
		{
			off[j] = i+1;
			j = j + 1;
		}
		else
		{
			on[l] = i+1;
			l = l + 1;
		}
	}
	bubbleSort(off,j);
	bubbleSort(on,l);
	t = 0;
	printf("On\n");
	while(k != 0 && t < l)
	{
		printf("%d ",on[t]);
		t = t +	 1;
		k = k - 1;	
	}
	t = 0;
	printf("\nOff\n");
	while(k != 0 && t < j)
	{
		printf("%d ",off[t]);
		t = t +	 1;	
		k = k - 1;
	}
	printf("\n");
}

int main()
{
	int m,n,k,f[100],t; //Floors(m),RoomsPerFloor(n),NumberOfSwitchesTurnesOn(k),FaultyRooms(f),TestCases(t)
	int i,j; //iterator
	printf("Enter number of test cases\n");
	scanf("%d",&t);
	for(i = 0 ; i < t ; i ++)
	{
		printf("Enter number of Floors,Rooms and SwitchesTurnedOn\n");
		scanf("%d %d %d",&m,&n,&k);
		printf("Enter the faulty rooms in each floor\n");
		for(j = 0 ; j < m ; j ++)
		{
			scanf("%d",&f[j]);			
		}
		CalcMaxRoom(m,n,k,f);		
	}
	return 0;
}
