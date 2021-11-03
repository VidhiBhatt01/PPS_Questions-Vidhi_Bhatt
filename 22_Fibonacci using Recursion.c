#include <stdio.h>
int fibo(int);
void main()
{
    int n,m=0,i;
    printf("Enter total no of terms: ");
    scanf("%d",&n);

    printf("Fibonacci series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",fibo(m));
        m++;
    }
}

int fibo(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return (fibo(n-1)+fibo(n-2));
}
