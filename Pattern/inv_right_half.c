#include <stdio.h>
int main()
{
        int i,j,n;                        //inverted right half triangle
        printf("Enter the number:");
        scanf("%d",&n);
        printf("\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i;j++)
        printf("* ");
        printf("\n");
}
    return 0;
}

