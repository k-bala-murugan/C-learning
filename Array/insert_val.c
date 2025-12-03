#include <stdio.h>

int main()
{
	int a[5]= {1,2,3,4,5};
	int i,j,n,val,index;
	n=sizeof a/sizeof a[0];
	printf("Enter the index=");
	scanf("%d",&index);
	printf("Enter the value=");
	scanf("%d",&val);
	for(i=0; i<n; i++)
	{
	    printf("%d ",a[i]);
	}
	printf("\n");
	for(i=n-1;i>index;i--)
	{
	    a[i]=a[i-1];
	}
	a[index]=val;
	for(i=0; i<n; i++)
	{
	    printf("%d ",a[i]);
	}
	
		

		return 0;
}
