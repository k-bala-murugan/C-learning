/*#include <stdio.h>                     //  Largest value

int main()
{
	int a[5];
	int i,j,n,val,large;
	n=sizeof a/sizeof a[0];
	printf("Enter the value=");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
	    printf("%d ",a[i]);
	}
	large=a[0];
	for(i=0; i<n; i++)
	{
	    
	    if(large<a[i])
	    {
	        large=a[i];
	    }
	    
	}
	printf("\nlarge value=%d ",large);
	printf("\n");
	
		

		return 0;
}

*/




 
#include<stdio.h>                           //   Second largest value
int main()
{
        int a[] = {26,1,83,17,26,72,34,34,19,833};
        //int a[] = {10,10,10,10,10,10,10,10};
        int i,big1,big2, n = sizeof a/sizeof a[0];
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
        if(a[0]<a[1])
        {
        big1=a[1];
        big2=a[0];
        }
        else
        {
            big1=a[0];
            big2=a[1];
        }
        for(i=2;i<n;i++)
        {
            if(a[i]>big1)
            {
                big2=big1;
                big1=a[i];
            }
            else if((a[i]>big2)&&(a[i]!=big1))
            {
                big2=a[i];
            }

        }
        printf("big1=%d\nbig2=%d",big1,big2);
}




