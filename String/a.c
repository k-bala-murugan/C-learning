#include<stdio.h>
int main()
{
	char s[20],d[50];	
	int i,j,n;
	printf("Enter the sourse string\n");	
	scanf("%s",s);
	printf("Enter the destination string\n");
	scanf("%s",d);

	printf("Enter the n value\n");	
	scanf("%d",&n);


	for(j=0;d[ j ];j++);
	for(i=0;(i<n)&&(d[ j ]=s[ i ]);i++,j++);
	d[ j ]='\0';

	printf("source --> %s\n",s);
	printf("destination --> %s\n",d);
}
	
