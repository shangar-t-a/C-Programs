#include<stdio.h>

//Function to sort
void swap(int *first_num,int *second_num)
{
	int temp;
	temp = *first_num;
	*first_num = *second_num;
	*second_num = temp;
}

//Partion Algorthm
int partion(int arr[] , int start , int end)
{
	int itr;
	int pivot = arr[end];
	int partion_index = start - 1;
	for(itr = start ; itr < end ; itr ++)
		if(arr[itr] < pivot)
			swap(&arr[itr] , &arr[++ partion_index]);
	swap(&arr[end] , &arr[++ partion_index]);
	return partion_index;
} 

//QuickSort Function
void quickSort(int arr[] , int start , int end)
{
	if(start < end)
	{
		int partion_index;
		partion_index = partion(arr , start , end);
		quickSort(arr , start , partion_index - 1);
		quickSort(arr , partion_index + 1 , end);
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
	int array[100],size,itr,start,end;//Declaration
	
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter the array elements\n");
	for(itr = 0 ; itr < size ; itr ++)
		scanf("%d",&array[itr]);
		
	printf("\nArray before Sorting :");
	printArray(array,size);
	
	start = 0;
	end = size - 1;
	quickSort(array,start,end);
	
	printf("\nArray after Sorting :");
	printArray(array,size);
}
