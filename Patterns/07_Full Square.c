#include<stdio.h>

int main()
{
  printf("Enter the row size:");

  int rows,i,j;
  scanf("%d",&rows);

  for(i=1;i<=rows;i++)
  {
      for(j=1;j<=rows;j++)
      {
        printf("*");
      }
      printf("\n");
  }

}
