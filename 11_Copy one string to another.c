#include<stdio.h>
int main()
{

    char s1[100] , s2[100];
    int i,j=0;

    printf("Enter the s1: ");
    scanf("%s",s1);

    printf("s1 = %s \n" , s1);

     while(s1[i]!='\0')
       {s2[j] = s1[i];
        i++;
        j++;
       }
    s2[j] = '\0';
    printf("s2 = %s \n" , s2);
    return 0;
}



