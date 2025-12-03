// Reverse the particular word in the given file


#include<stdio.h>
int main()
{
	char ch;
	char *pos;
	FILE *fp=fopen("data3.txt","r+");
	if(fp==NULL)
	{
		printf("file is not exist");
		return 0;
	}

	printf("FILE DATA:");
	while((ch=fgetc(fp))!=EOF)
		printf(" %c",ch);

	rewind(fp);

	printf("Enter the substring:");
	scanf("%s",sub_str);
	
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==substr[0])
		{


