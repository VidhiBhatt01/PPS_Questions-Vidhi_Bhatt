#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("\n");
    while(n!=0)
    {
        printf("%d",n%10);
        n=n/10;
    }
    printf("\n");
}
