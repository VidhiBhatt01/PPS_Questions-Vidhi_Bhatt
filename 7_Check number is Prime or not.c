#include<stdio.h>

int checkPrime();
int main()
{
    printf(" Que = Write a program in C to find whether a Number is Prime OR Composite using Recursion \n \n");
    int a,b;
    printf(" Enter a positive number: ");
    scanf(" %d" , &a);
    b=checkPrime(a,a/2);
    if (b==1)
        printf(" %d is a Prime Number \n",a);
    else
        printf(" %d is a Composite Number \n",a);
    return 0;
}

int checkPrime(int a , int c)
{
    if(c==1)
        return 1;
    if(a%c==0)
        return 0;
    return checkPrime(a,c-1);
}

