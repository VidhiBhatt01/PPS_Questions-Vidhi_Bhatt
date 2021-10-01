#include<stdio.h>
int facto(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    facto(n);
    printf("The factorial of %d is %d",n,facto(n));
    return 0 ;
}

int facto(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    else
        return n*facto(n-1);
}
