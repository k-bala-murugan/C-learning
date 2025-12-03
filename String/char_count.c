#include<stdio.h>
int main()
{
int i,count=0;    //count the given number
char a[100],ch;
printf("Enter the string:");
scanf("%[^\n]",a);
printf("Enter the character:");
scanf(" %c",&ch);
for(i=0;a[i];i++)
{
    if(a[i]==ch)
        count++;
}
printf("\ncount= %d\n",count);
}
