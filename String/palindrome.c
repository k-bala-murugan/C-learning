#include <stdio.h>
int main()
{
    char s[50];
    int i,j,n,temp;
    printf("Enter the string:");
    scanf("%s",s);
    for(n=0;s[n];n++);
    for(i=0,j=n-1;i<j;i++,j--)
    {
      if(s[i]!=s[j])
      break;
    }
    if(i>=j)
    printf("Given string is palindrome");
    else
    printf("Given string is not a palindrome");
    printf("\n");
}

