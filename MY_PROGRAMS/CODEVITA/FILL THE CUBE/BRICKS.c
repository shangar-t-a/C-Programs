//FILL THE CUBE
//INPUT
//First Line will provide the size of the original wall N.
//Next N lines will provide the type of material (C and D) used for each
//brick by the novice employee.

//OUTPUT
//Size of the biggest possible C square wall which can be fitted in the
//final wall.

#include<stdio.h>

//print a given matrix
void printRotatedWall(char arr[][100] , int n)
{
	int i,j;
	printf("Wall\n");
	for(i = 0 ; i < n ; i ++)
	{
		for(j = 0 ; j < n ; j ++)
			printf("%c ",arr[i][j]);
		printf("\n");	
	}
}

//Print burned Wall
void printBurntWall(char arr[][100] , int n)
{
	int i,j;
	printf("Burned Wall\n");
	for(i = 0 ; i < n ; i ++)
	{
		for(j = 0 ; j < n ; j ++)
		{
			if(arr[i][j] == 'D')
				printf("%c ",'_');
			else
				printf("%c ",arr[i][j]);	
		}
		printf("\n");	
	}
	printf("\n");
}

//function to check all the elements of the array are identical
//x,y are position of an element in the array
//n is the size of the sub array to be checked 
int identityChecker(char arr[][100] , int n , int x , int y)
{
	int i,j,flag=0;
	for(i = x ; i < x+n ; i ++)
	{
		for(j = y ; j < y+n ; j++)
		{
			if(arr[i][j] != 'D')
				flag = flag + 1;
		}
	}
	return flag;
}

//function to find the maximum size of the square(of identical elements) in a matrix
int identicalMatrix(char arr[][100],int n)
{
	int i,j,k;//iterators
	int x,y;//temporary variables
	int flag,size = 1;
	for(i = 0 ; i < n ; i ++)
	{
		for(j = 0 ; j < n ; j ++)
		{
			for(k = 1 ; k <= n-j ; k ++)
			{
				x = i;
				y = j;
        		flag = 0;
				flag = identityChecker(arr , k , x , y);
				if(flag == 0 && k > size)
					size = k;
      		}
		}
	}
	return size;
}

//Burner function : to move high quality matrix to botton in matrix
int burner(char a[][100],int n)
{
	int i,j,k,maxsize;
	char temp,b[100][100];
	for(i = 0 ; i < n ; i ++)
		for(j = 0 ; j < n ; j ++)
			b[i][j] = a[i][j];	
	for(k = 0 ; k < n ; k ++)
	{
		for(i = 0 ; i < n ; i ++)
		{	
			for(j = 0 ; j < n-i-1 ; j ++)
			{
				if(b[j][k] < b[j+1][k])
				{
					temp = b[j][k];
					b[j][k] = b[j+1][k];
					b[j+1][k] = temp;
				}
			}
		}	
	}
	printBurntWall(b,n);
	maxsize = identicalMatrix(b,n);
	return maxsize;
}

//rotate a given matrix by 90 degree counter clackwise
int rotateMatrix(char arr[][100],int n)
{
	int x,y,i,j,b[100][100];
	x = 0;
	for(i = n-1 ; i >=0 ; i --)
	{
		y = 0;
		for(j = 0 ; j < n ; j ++)
		{
			b[x][y] = arr[j][i];
			y = y + 1;
		}	
		x = x + 1;	
	}
	for(i = 0 ; i < n ; i ++)
		for(j = 0 ; j < n ; j ++)
			arr[i][j] = b [i][j];
}

//Maximum size of square(with identical elements) in a matrix 
int maxBrickSize(char arr[][100],int n)
{
	int side,maxsize=1,temp;
	int angle;
	for(side = 0 ; side < 4 ; side ++)
	{	
		rotateMatrix(arr,n);
		printf("Rotated : %d\n",90*(side+1));
		printRotatedWall(arr,n);
		temp = burner(arr,n);
		if(temp > maxsize)
			maxsize = temp;
	}
	return maxsize;
}

//Driver function
int main()
{
	int maxsize,size,i,j;
	char wall[100][100];
	
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	
	printf("Enter the elements of the array , C - high quality bricks & D - low quality bricks\n");
	printf("Inputs as array of strings , 1 row = string\n");
	for(i = 0 ; i < size ; i ++)
		scanf("%s",&wall[i]);
			
	maxsize = maxBrickSize(wall , size);
	printf("maxsize of brick = %d",maxsize);
	return 0;
}
