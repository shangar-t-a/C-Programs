#include<stdio.h>

//Merges 2 sorted arrays
void merger(int arr[] , int start , int mid , int end)
{
	int left_size = mid - start + 1 , right_size = end - mid;
	int left_arr[left_size] , right_arr[right_size] , itr_left_arr , itr_right_arr , itr_main_arr;
	
	for(itr_left_arr = 0 ; itr_left_arr < left_size ; itr_left_arr ++)
		left_arr[itr_left_arr] = arr[itr_left_arr + start];
	for(itr_right_arr = 0 ; itr_right_arr < right_size ; itr_right_arr ++)
		right_arr[itr_right_arr] = arr[mid + 1 + itr_right_arr];
		
	itr_left_arr = itr_right_arr = 0;
	itr_main_arr = start;
	
	while(itr_left_arr < left_size && itr_right_arr < right_size)
	{
		if(left_arr[itr_left_arr] < right_arr[itr_right_arr])
			arr[itr_main_arr++] = left_arr[itr_left_arr++];
		else
			arr[itr_main_arr++] = right_arr[itr_right_arr++];
	}
	
	while(itr_left_arr < left_size)
		arr[itr_main_arr++] = left_arr[itr_left_arr++];
	while(itr_right_arr < right_size)
		arr[itr_main_arr++] = right_arr[itr_right_arr++]; 
}

//Merge Sorting
void mergeSort(int arr[] , int start , int end)
{
	if(start < end)
	{
		int mid;
		mid = (start + end) / 2;
		mergeSort(arr , start , mid);
		mergeSort(arr , mid+1 , end);
		merger(arr , start , mid , end);
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
	mergeSort(array,start,end);
	
	printf("\nArray after Sorting :");
	printArray(array,size);
}
