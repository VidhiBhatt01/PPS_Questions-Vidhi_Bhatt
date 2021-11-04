#include<stdio.h>

void swap(int,int);

void main()
{
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);

    printf("\n\nThe value of x before swap is: %d",x);
    printf("\nThe value of y before swap is: %d",y);

    swap(x,y);

    return 0;
}

void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    printf("\n\nThe value of x after swap is: %d",x);
    printf("\nThe value of y after swap is: %d\n",y);
}
