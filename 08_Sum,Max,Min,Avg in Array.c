#include <stdio.h>

int main()
{
    // Que = Read 10 numbers from user and store them in an array. Display sum, max, mix and average of the numbers
     int a[10],i,max,min,sum=0;
     for(i=0;i<10;i++)
     {
        printf("\n Enter Integer Value [%d] : ",i+1);
        scanf("%d",&a[i]);

        //sum
        sum=sum+a[i];

        //max
        if(i==0)
        {
          max=a[i];
        }
        else
        {
          if(max<a[i])
          {
           max=a[i];
          }
        }
        //min
        if(i==0)
        {
          min=a[i];
        }
        else
        {
          if(min>a[i])
          {
           min=a[i];
          }
        }
     }
     printf("\n Sum     : %d",sum);
     printf("\n Maximum : %d",max);
     printf("\n Minimum : %d",min);
     printf("\n Average : %f",((float)sum/i));
     printf("\n");
     return 0;


}
