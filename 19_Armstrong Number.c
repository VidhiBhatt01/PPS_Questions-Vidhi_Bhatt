#include <stdio.h>
int power(int ,int);
int main()
{
    int n, sum=0 , temp, remainder, digits=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n;
    while(temp!=0)
    {
        digits++;
        temp=temp/10;
    }

    temp = n;
    while(temp!=0)
    {
        remainder = temp%10;
        sum = sum + power(remainder,digits);
        temp=temp/10;
    }

    if(n==sum)
        printf("Is an Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}

int power(int n,int r)
{
    int c,p=1;
    for(c=1;c<=r;c++)
        p=p*n;
    return p;
}
