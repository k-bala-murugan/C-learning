          //Reverse the string



#include <stdio.h>
int main()
{
    char s[50];
    int i,j,n,temp;
    printf("Enter the string:");
    scanf("%[^\n]",s);
    for(n=0;s[n]!='\0';n++);
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    printf("%s\n",s);
    return 0;
}
