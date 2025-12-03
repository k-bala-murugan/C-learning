#include<stdio.h>
  int main()
  {
          int i,j,k,r,n,sum;
          int a[2][2] = { {1,2}, {4,5} };
          int b[2][2] = { {3,4}, {6,7} };
          int c[2][2];
          for(i=0;i<2;i++)
           {
            for(j=0;j<2;j++)
               {
                   sum=0;
                    for(k=0;k<2;k++)
                    {
                        sum=sum+(a[i][k])*(b[k][j]);
                        c[i][j]=sum;
                     }
                 }
            }   
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
       
         {
            printf("%d\n",c[i][j]);
        }
    }
  }
