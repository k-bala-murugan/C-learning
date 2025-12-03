#include<stdio.h>
int main()
{
        int a[] = {10,20,22,30,11,49,50,22,10,88,34,50,20,40,30};
      
        int i,j,n,even=0,odd=0;
        n = sizeof a/sizeof a[0];
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        
        printf("even=%d \nodd=%d",even,odd);
        
       
}
