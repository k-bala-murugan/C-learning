#include <stdio.h>
int main()
{
    char s[50];
    char a[50];
    int i,j,n;
    printf("Enter the string:");
    scanf("%[^\n]",s);
    for(n=0;s[n];n++);
    for(i=0;i<n;i++)
    {
     a[i]=s[i];
      
    }
    a[n]='\0';

    printf("oringinal value:%s\n",s);
    printf("copied value:%s\n",a);
    
   
}
