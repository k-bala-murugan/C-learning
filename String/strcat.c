#include <stdio.h>
char *cat(char*,char*);
int main()
{
    char s[30],d[30];
    printf("Source:");                    //combine to string using     user defined
    scanf("%s",s);
    printf("Destination:");
    scanf("%s",d);
    char *val=cat(d,s);
    printf("Combined:%s",d);
}
char *cat(char*d,char*s)
{
    int i,j;
    for(i=0;d[i];i++);
    for(j=0;d[i]=s[j];j++,i++);
    return d;
}     




/*

#include <stdio.h>
#include<string.h>
int main()
{
    char s[30],d[30];                   //combine to string using   strcat()
    printf("Source:");
    scanf("%s",s);
    printf("Destination:");
    scanf("%s",d);
    char* val= strcat(d,s);
    printf("Combined:%s",d);
}
*/
