//write a program to print a binary equivalent of a number from a array  
//if it's Binary equivalent has equal number of 1's and 0's
//else append 0's corresponding to the maximum number in the array 

#include<stdio.h>
#include<stdlib.h>

int len,max_len,flag;//Bit length of maximum element in list
char bin[100];

//To display the String
int display()
{
	int i;
	for(i = 0 ; i < len ; i = i + 1)
		printf("%c",*(bin+i));
}

//Decimal to Binary
void Dec_Bin(int dec)
{
	int temp[100],i=0,j;
	while(dec != 0)//L.C.M
	{
		temp[i] = dec % 2;
		dec = dec / 2;
		i = i + 1;	
	}
	
	len = i;
	i = i - 1;
	
	if(flag == 0)
	{
		max_len = len;
		flag = flag + 1;
	}
	
	for(j = 0 ; j < len ; j = j + 1)//Reversing
	{
		if(temp[i] == 1)
			bin[j] = '1';
		else
			bin[j] = '0';
		i = i - 1;	
	}	

}

//Checking for Number Of 0's and 1's
int tester()
{
	int one,zero,i;
	one = zero = 0;
	
	for(i = 0 ; i < len ; i = i + 1)
	{
		if(*(bin+i) == '1')
			one = one + 1;
		else
			zero = zero + 1;
	}
	
	if(one == zero)
		return 1;
	else
		return 0;
}

void main()
{
	//Declaration
	int size,arr[1000];
	int i,j;//iterator
	int test,temp;//Var for tester 1 if number of 1's equal to 0's
	int count = 0;//To check the false condition
	//char *binary;//To store binary value
	
	//Inputs
	printf("Enter the size of the array\n");
	scanf("%d",&size);	
	printf("Enter the elements of the array\n");
	for(i = 0 ; i < size ; i = i + 1)
		scanf("%d",&arr[i]);
		
	for(i = 0 ; i < size-1 ; i = i + 1)//sorting
		{
			for(j = i ; j < size ; j = j + 1)
			{
				if(i != j && arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		
	for(i = 0 ; i < size ; i = i + 1)
	{
		Dec_Bin(arr[i]);
		test = tester();
		if(test == 1)
		{
			display();
			break;
		}
		else
			count = count + 1;
	}
	
	if(count == size)
	{
		for(i = 0 ; i < max_len ; i++)
			printf("0");
	}
}




