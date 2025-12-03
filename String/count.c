
#include<stdio.h>      // using scan function
int main()
 {
     char a[101];
     int n,i,upper=0,lower=0,num=0,spchar=0;
     printf("Enter the string: ");
     //gets(a);
     scanf("%[^\n]",a);
     printf("%s",a);
     for(i=0;a[i];i++)

     {
         if((a[i]>=65)&&(a[i]<=90))
         upper++;
         else if((a[i]>=97)&&(a[i]<=122))
         lower++;
         else if((a[i]>=48)&&(a[i]<=57))
         num++;
         else
         spchar++;
 }
 printf("\nupper=%d\nlower=%d\nnum=%d\nspchar=%d\n%d\n",upper,lower,num,spchar,i);
}



/*
#include<stdio.h>  //count of alpha,number,specialchar
int main()
 {
     char a[] = "abcdf AFSGD 12345 %&*!@";
     int n,i,upper=0,lower=0,num=0,spchar=0;

     for(i=0;a[i];i++)

     {
         if((a[i]>=65)&&(a[i]<=90))
         upper++;
         else if((a[i]>=97)&&(a[i]<=122))
         lower++;
         else if((a[i]>=48)&&(a[i]<=57))
         num++;
         else
         spchar++;
 }
 printf("upper=%d\nlower=%d\nnum=%d\nspchar=%d\n%d\n",upper,lower,num,spchar,i);
}

*/
