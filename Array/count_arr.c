
//count the number of each element

#include <stdio.h>
int main()
{
    int i,j,n,val,count=1;
    int a[10]={10 ,20 ,30 ,40 ,40 ,40 ,50 ,60 ,70 ,70};
    n= sizeof a/sizeof a[0];
    for(i=0;i<n;i++)
    {
        printf(" %d", a[i]);
    }     
    for(i=0;i<n;i++)
    {
	    for(j=0;j<i;j++)
	    {
          	 if(a[i]==a[j])
            	break;
	    }
	    if(i==j)
	    {
		    for(j=i+1,count=1;j<n;j++)
		    {
			    if(a[j]==a[i])
                	    count++;
           	    }
		    printf("\na[%d]=%d  count=%d",i,a[i],count);
       	    }
    }
    printf("\n");
}
        
    
   
        
    

    
