#include<stdio.h>
int main()
{
    printf("Enter the row size(Odd Number):");
    int row_size;
    scanf("%d",&row_size);
    int i,j;
    int print_control_x=1;

      for(j=1;j<=row_size;j++)
       {
           for(i=1;i<=row_size;i++)
           {
               if(i<=print_control_x || i>=row_size-print_control_x+1)
               {
                printf("*");
                 }
               else
               {
                 printf(" ");
               }
             }
           if(j<=row_size/2)
        	   print_control_x++;
           else
              print_control_x--;
            printf("\n");
     }
}
