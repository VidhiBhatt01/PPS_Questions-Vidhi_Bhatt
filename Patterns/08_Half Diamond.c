#include<stdio.h>
int main()
{
  printf("Enter the row size:");

  int rows,i,j,s;
  scanf("%d",&rows);


  for (j= 1; j <= rows; j++)
    {
        for (i = 1; i <= j; i++)
            printf("*");

        printf("\n");
    }

  for (j= rows-1; j>=1; j--)
    {
        for (i = 1; i <= j; i++)
            printf("*");

        printf("\n");
    }
}

