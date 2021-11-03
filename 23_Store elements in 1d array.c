#include<stdio.h>

int main()
{
    int arr[100];
    int n;
    printf("Enter the number of elements you want in your 1D array: ");
    scanf("%d",&n);

    //input the elements from user
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }

    //print the array
    printf("The array is: ");
    for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
}
