#include<stdio.h>

int main()
{
    int arr[100][100];
    int r,c;
    printf("Enter the number of rows you want in your 2D array: ");
    scanf("%d",&r);
    printf("\nEnter the number of columns you want in your 2D array: ");
    scanf("%d",&c);

    //input the elements from user
    printf("\nEnter %d elements:",r*c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }



    //print the array
    printf("\nThe array is: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            {
                printf("%d ",arr[i][j]);
            }
    }
}

