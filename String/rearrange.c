
// Reverse and rearrange the words of string


#include <stdio.h>
int main() {
    int i,j,pos,temp,start=0;
    char s[100];
    printf("Enter the String:");  
    scanf("%[^\n]",s);
    for(pos=0;s[pos];pos++);
    for(i=0,j=pos-1;i<j;i++,j--)   //reverse the string
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    printf("\nAfter reversed:%s",s);
    for(i=0;pos>=i;i++)
    {
        if((s[i]==' ')||(s[i]==0))
        {

            for(int k=start,j=i-1;j>k;k++,j--)    //rearrange the string
            {
                temp=s[k];
                s[k]=s[j];
                s[j]=temp;
            }
            start=i+1;
        }
    }
    printf("\n\nAfter rearranged :%s",s);
    return 0;
}

