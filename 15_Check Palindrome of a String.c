#include <stdio.h>
#include <string.h>

int isPalindrome(char*c)
{
    int i=0,j;
    j=strlen(c)-1;

    while(i<j)
    {
        if(c[i]!=c[j])
        {
            return -1;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    char s1[100]=" ";
    printf("Enter s1: ");
    scanf("%s",s1);

    int ans= isPalindrome(s1);
    if(ans==1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;

}

