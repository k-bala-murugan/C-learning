#include<stdio.h>
#include<stdlib.h>
  int main()
  {
      int **a,**b,**m,i,j,k,r,c,n,sum;
       printf("Enter the row:");
      scanf("%d",&r);
      printf("Enter the col:");
      scanf("%d",&c);
      a=(int**)malloc(r*sizeof(int*));
      for(i=0;i<r;i++)
      a[i]=(int*)malloc(c*sizeof(int));
      
      b=(int**)malloc(r*sizeof(int*));
      for(i=0;i<r;i++)
      b[i]=(int*)malloc(c*sizeof(int));
      
      m=(int**)malloc(r*sizeof(int*));
      for(i=0;i<r;i++)
      m[i]=(int*)malloc(c*sizeof(int));
      
      for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
         {
            scanf("%d",&a[i][j]);
         }
      }
      for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
         {
            scanf("%d",&b[i][j]);
         }
      }
      for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
        {
            sum=0;
            for(k=0;k<c;k++)
            {
               sum=sum+(a[i][k])*(b[k][j]);
            } 
               m[i][j]=sum;
               
            
       }
          
      }
      for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
         {
            printf(" %d",m[i][j]);
         }
         printf("\n");
      }
      for(i=0;i<c;i++)
      {
          free(a[i]);
          free(b[i]);
          free(m[i]);
      }
      
      free(a);
      free(b);
      free(m);
  }

