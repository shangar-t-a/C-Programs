//Uses Dynamic Programming
//Uses a 2D array to store the values (Bottom Up approach) => a[i][j]
//The Result i.e maximum combination will be in last position of the array
#include <stdio.h>

int main(void) 
{
  int n,i,j,coins[100],w,a[100][100];
  
  scanf("%d",&n);//Length of coin array
  for(i=0;i<n;i++)
    scanf("%d",&coins[i]);//coin array
  scanf("%d",&w);//Maximum Weight
  
  for(i=0;i<n;i++)
    a[i][0] = 1;
  
  for(i=0;i<n;i++)
  {
    for(j=1;j<=w;j++)
    {
      if(coins[i] > j)
        a[i][j] = a[i-1][j];
      else
        a[i][j] = a[i-1][j] + a[i][j-coins[i]];
    }
  }

  printf("\nMaximum Combinations = %d",a[n-1][w-1]); 
  return 0;
}
