#include<stdio.h>
int main()
{
        int a[] = {10,20,22,30,11,40,50};
        int i,j,n,index;
        n = sizeof a/sizeof a[0];
        for(i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }
        printf("\n");
        printf("index=");
        scanf("%d",&index);
        for(i=index;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
            a[n-1]=0;
        for(i=0;i<n;i++)
        {
        printf("%d ",a[i]);
        }
        printf("\n");
       
}
