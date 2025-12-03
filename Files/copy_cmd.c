//copy command using fputc() and fgetc()
/*#include<stdio.h>
int main()
{
	FILE *fs=fopen("data1.txt","r");
	if(fs==NULL)
		printf("file is not exist");

	FILE *fd=fopen("data.txt","w");
	char ch;
	while((ch=fgetc(fs))!=EOF)

	{
		fputc(ch,fd);
	}
}*/


//copy command using fgets() and fputs()
#include<stdio.h>
int main()
{ 
	char str[100];
	int n;
	FILE *fs=fopen("data.txt","r");
	if(fs==NULL)
	printf("file doesnt exist");
	FILE *fd=fopen("data1.txt","w");
	printf("ENTER THE N VALUE:");
	scanf("%d",&n);
	while((fgets(str,n,fs))!=NULL)
		fputs(str,fd);
	fclose(fs);
	fclose(fd);
}




