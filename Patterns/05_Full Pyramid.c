#include <stdio.h>
int main()
{
  printf("Enter the row size:");
  int rows,i,j,s;
  scanf("%d", &rows);
  for (j = 1; j <= rows; j++)
  {
    for (i = rows - 1; i>= j; i--)
      printf(" ");

    for (s = 1; s <= j; s++)
      printf("* ");

    printf("\n");
  }
}
