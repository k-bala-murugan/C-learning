#include<stdio.h>
int main()                   // combine two string
{
	char s[20],d[50];
	int i,j;
	printf("Enter the sourse string\n");	
	scanf("%s",s);
	printf("Enter the destination string\n");
	scanf("%s",d);

	for(j=0;d[ j ];j++);
	for(i=0;d[ j ]=s[i];i++,j++);
	printf("source --> %s\n",s);
	printf("d --> %s\n",d);
}
