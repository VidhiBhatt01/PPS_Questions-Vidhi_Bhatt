#include<stdio.h>
void main()
{

    int n,r;
    printf("Enter a number: ");
    scanf("%d", &n);
    r=n%10;

    if(r%2==0)
        printf("\n %d is Even \n\n", n);
    else
        printf("Number is Odd \n\n");
}
