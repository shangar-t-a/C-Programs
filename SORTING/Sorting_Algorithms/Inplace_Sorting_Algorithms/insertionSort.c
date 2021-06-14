#include<stdio.h>

//Function to sort
void swap(int *first_num,int *second_num)
{
	int temp;
	temp = *first_num;
	*first_num = *second_num;
	*second_num = temp;
}

//Insertion Sort
void insertionSort(int arr[],int size)
{
	int outer_itr,inner_itr,key;
	for(outer_itr = 1 ; outer_itr < size ; outer_itr ++)
	{
		key = arr[outer_itr];
		inner_itr = outer_itr - 1;
		while(inner_itr >= 0 && arr[inner_itr] > key)
		{
			arr[inner_itr + 1] = arr[inner_itr];
			inner_itr = inner_itr - 1;
		}
		arr[inner_itr + 1] = key;
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
	
	insertionSort(array,size);
	
	printf("\nArray after Sorting :");
	printArray(array,size);
}
