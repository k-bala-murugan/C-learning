#include<stdio.h>
int main()
{
    int i=0,pos;
    char s[100];
    scanf("%[^\n]",s);
    for(pos=0;s[pos];pos++)
    {
        if(s[pos]!=' ')
        {                              // print a string without space
            s[i]=s[pos];   
            i++;
        }
    }
    s[i]='\0';
    printf("%s",s);
}                            
