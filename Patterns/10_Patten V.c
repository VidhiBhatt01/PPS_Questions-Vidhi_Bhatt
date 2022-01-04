#include <stdio.h>
int main()
{
  printf("Enter the row size:");
  int rows;
  scanf("%d", &rows);
  int in, out, p;
  int print_control_x = 1;
  int print_control_y = rows * 2 - 1;

  for (out = 1; out <= rows; out++)
  {
    for (in = 1; in <= rows * 2; in++)
    {
      if (in == print_control_x || in == print_control_y)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    print_control_x++;
    print_control_y--;
    printf("\n");
  }
}
