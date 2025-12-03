// read the data more than once


#include<stdio.h>
int main ()
{
	FILE *fp=fopen("data.txt","r");

	if(fp==NULL)
	{
		printf("file doesn't exist");
	}
	char ch;

	while((ch=fgetc(fp))!=EOF) // read and print
		printf("%c",ch);

	rewind(fp);   //curser move to beginning of the file

	while((ch=fgetc(fp))!=EOF) // again read and print
                printf("%c",ch);

}

