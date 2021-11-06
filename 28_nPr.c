#include <stdio.h>

long factorial(int);
long find_npr(int,int);


int main()
{
    int n,r;
    printf("Enter n: ");
    scanf("%d" ,&n);

    printf("Enter r: ");
    scanf("%d" ,&r);

    long nCr;
    nCr=find_npr(n,r);

    printf("%dP%d = %d\n",n,r,nCr);

    return 0;

}

long factorial(int n)
{
    int c;
    long result=1;

    for(c=1;c<=n;c++)
    {
        result=result*c;
    }

    return result;
}

long find_npr(int n,int r)
{
    long result;
    result=factorial(n)/factorial(n-r);

    return result;
}
