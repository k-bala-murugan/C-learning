#include<stdio.h>
  int main()
  {
          int i,j,k,r,n,sum=0;
          int a[2][2] = { {1,2}, {4,5} };
          int b[2][2] = { {3,4}, {6,7} };
          int c[2][2];
          //int a[][3] = { 10,20,30,11,22,33 };
          //int a[2][] = { {10,20,30}, {11,22,33} }; //error    
  
          // r = sizeof a/sizeof a[0];
          // c = sizeof a[0]/sizeof a[0][0];
           //n = r*c;
//printf("r - %d  c - %d   n - %d\n",r,c,n);
           for(i=0;i<2;i++)
           {
               
               for(j=0;j<2;j++)
               {
        //           sum=0;
                    for(k=0;k<2;k++)
                    {
                        sum=sum+(a[i][k])*(b[k][j]);
                        //c[i][j]=sum;
                    
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
