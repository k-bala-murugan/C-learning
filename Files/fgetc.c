#include<stdio.h>
int main(int argc,char* argv[])
{
	char ch;
	if(argc!=2)
	{
		printf("usage: ./a.out file\n");
	}

	FILE *fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
	printf("file doesn't exist");
	}
	while(((ch=fgetc(fp))!=EOF))
	printf("%c",ch);
	
}
