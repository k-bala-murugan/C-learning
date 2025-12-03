// count the no of substring present in main string


#include<stdio.h>
int main()
{
    int i,j,count=0;
    char m[200],s[100];
    printf("Enter the main:");
    scanf("%s",m);
   printf("Enter the substring:");
    scanf("%s",s);
    for(i=0;m[i];i++)
    {
        if(m[i]==s[0])
        {
            for(j=1;s[j];j++)
            {
                if(s[j]!=m[i+j])
                break;
            }
                if(s[j]=='\0')
                count++;
        }
    }
    if(count>0)
    printf("sub string is present %d times ",count);
    else
    printf("sub string is not present\n");
}

