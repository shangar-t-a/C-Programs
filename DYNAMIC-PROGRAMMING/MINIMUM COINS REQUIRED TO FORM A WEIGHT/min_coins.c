#include <stdio.h>

int min(int x, int y)
{
  int z;
  if(x < y){
    z = x;
  }
  else{
    z = y;
  }
  return z;
}


int main(void)
{
  int a[100][100],i,j,n,coins[100],w;
  printf("Enter Number of Coins\n");
  scanf("%d",&n);
  printf("Enter the Denominations\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&coins[i]);
    a[i][0] = 0;
  }
  printf("Enter the Weight\n");
  scanf("%d",&w);

  for(i=0;i<n;i++)
  {
    for(j=1;j<=w;j++)
    {
      if(i == 0)
      {
        a[i][j] = j/coins[i];
      }
      else
      {
        if(coins[i] > j){
          a[i][j] = a[i-1][j];}
        else{
          a[i][j] = min(a[i-1][j] , (1 + a[i][j-coins[i]]) );}
      }
    }
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<=w;j++)
    {
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }

  return 0;
}