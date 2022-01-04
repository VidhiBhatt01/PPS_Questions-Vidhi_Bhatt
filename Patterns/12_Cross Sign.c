#include<stdio.h>
int main()
{
    int out,in;
    printf("Enter the row size:");
	    int row_size;
	    scanf("%d",&row_size);
        for(out=1;out<=row_size;out++)
       {
           for(in=1;in<=row_size;in++)
           {
               if(in==out || in+out==row_size+1)
               {
	    	 printf("*");
	     }
	     else
         {
             printf(" ");
         }}
        printf("\n");
}}
