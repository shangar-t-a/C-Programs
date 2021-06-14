#include<stdio.h>

//Function to sort
void swap(int *first_num,int *second_num)
{
	int temp;
	temp = *first_num;
	*first_num = *second_num;
	*second_num = temp;
}

//Selection Sort
void selectionSort(int arr[],int size)
{
	int outer_itr,inner_itr,min_index;
	for(outer_itr = 0 ; outer_itr < size ; outer_itr ++)
	{
		min_index = outer_itr;
		for(inner_itr = outer_itr + 1 ; inner_itr < size ; inner_itr ++)
		{
			if(arr[inner_itr] < arr[min_index])
			{
				min_index = inner_itr;
			}
		}
		swap(&arr[min_index] , &arr[outer_itr]);
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
	
	selectionSort(array,size);
	
	printf("\nArray after Sorting :");
	printArray(array,size);
}
