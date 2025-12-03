#include <stdio.h>
int main()
{
        int i,j,n;
        printf("Enter the number:");
        scanf("%d",&n);
        printf("\n");


        for(i=0;i<n;i++)
        {
            for(j=0;j<i+1;j++)
        printf("* ");
        printf("\n");
	}	
      


        for(i=0;i<n;i++)
        {
            for(j=0;j<i+1;j++)
        printf("%d ",j+1);
        printf("\n");
	}




        for(i=0;i<n;i++)
        {
            for(j=0;j<i+1;j++)
        printf("%d ",j+i+1);
        printf("\n");
	}
    return 0;
}

