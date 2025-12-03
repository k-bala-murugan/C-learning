#include<stdio.h>
int main()
{
int i,a[10],num,count=0;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("Enter the number:");
scanf("%d",&num);
for(i=0;i<10;i++)
{
    if(a[i]==num)
        count++;
}
if(count==0)
    printf("Not present");
else
printf("Present numbers= %d\n",count);	
}

