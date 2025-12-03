#include<stdio.h>
int main()
{
int i,a[5],num,count;
printf("Enter the arr value:");

for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("Reversed arr value:");

for(i=4;i>=0;i--)
printf("%d ",a[i]);
}

