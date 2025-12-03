//write a program to read the characters from keyboard and writes into a file

#include<stdio.h>
int main ()
{ char ch;
	FILE *fp=fopen("data1.txt","w");
	while((ch=getchar())!=EOF)
	{
		fputc(ch,fp);
	}
	fclose(fp);

	printf("data saved in files");

	fp=fopen("data1.txt","r");
	printf("\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
}

