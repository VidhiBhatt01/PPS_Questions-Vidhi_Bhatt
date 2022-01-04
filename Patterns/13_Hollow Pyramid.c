#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the row size:");
	    int row_size;
	    scanf("%d",&row_size);
        for(j=1;j<=row_size;j++)
       {
           for(i=1;i<=row_size;i++)
           {
               if(i==1 || j==i || j==row_size)
               {
	    	 printf("*");
	     }
	     else
         {
             printf(" ");
         }
}
        printf("\n");
}
}
