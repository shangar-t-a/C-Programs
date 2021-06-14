#include<stdio.h>

//Function to sort
void swap(int *first_num,int *second_num)
{
	int temp;
	temp = *first_num;
	*first_num = *second_num;
	*second_num = temp;
}

//Bubble Sort
void bubbleSort(int arr[],int size)
{
	int outer_itr,inner_itr,flag;
	for(outer_itr = 0 ; outer_itr < size - 1 ; outer_itr ++)
	{
		flag = 0;
		for(inner_itr = 0 ; inner_itr < size - outer_itr - 1 ; inner_itr ++)
		{
			if(arr[inner_itr] > arr[inner_itr+1])
			{
				flag = flag + 1;
				swap(&arr[inner_itr] , &arr[inner_itr+1]);	
			}
		}
		if(flag == 0)
			break;
	}
}

//Function to print array
void printArray(int arr[],int size)
{
	int itr;
	for(itr = 0 ; itr < size ; itr ++)
	{
		printf("%d ",arr[itr]);
	}
}

//Driver Function
void main()
{
	int array[100],size,itr;//Declaration
	
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter the array elements\n");
	for(itr = 0 ; itr < size ; itr ++)
		scanf("%d",&array[itr]);
		
	printf("\nArray before Sorting :");
	printArray(array,size);
	
	bubbleSort(array,size);
	
	printf("\nArray after Sorting :");
	printArray(array,size);
}
