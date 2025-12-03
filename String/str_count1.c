#include <stdio.h>
int main()
{
    int pos,i,j,n,val,count=1;
    char s[100];
      scanf(" %[^\n]", s);
    for(pos=0;s[pos];pos++);
   for(i=0;i<pos;i++)
    {
        for(j=0;j<i;j++)
            {
                 if(s[i]==s[j])
                break;
            }
            if((i==j)&&(s[i]!=' '))
            {
                    for(j=i+1,count=1;j<pos;j++)
                    {
                            if(s[j]==s[i])
                            count++;
                    }
                    printf("\ns[%d]=%c  count=%d",i,s[i],count);
            }
    }
    printf("\n");
}
