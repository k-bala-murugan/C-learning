#include<stdio.h>
int main()
{
int i,j,a[10],n,temp;
printf("Enter the arr values:");

for(i=0;i<10;i++)
{
        scanf("%d",&a[i]);
}
n = sizeof a/sizeof a[0];
for(i=0,j=n-1;i<j;i++,j--)
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;                                                                                             
    
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}

