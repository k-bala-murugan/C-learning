#include <stdio.h>
int main() {
    int i,j,pos,temp,start=0;
    char s[100];
    printf("Enter the String:"); // Reverse the word individually in string
    scanf("%[^\n]",s);
    printf("\nBefore reverse:%s",s);
    for(pos=0;s[pos];pos++);
    for(i=0;pos>=i;i++)
    {
        if((s[i]==' ')||(s[i]==0))
        {
            
            for(int k=start,j=i-1;j>k;k++,j--)
            {
                temp=s[k];
                s[k]=s[j];
                s[j]=temp;
            }
            start=i+1;
        }
    }
    printf("\n\nAfter reverse :%s",s);
    return 0;
}  
