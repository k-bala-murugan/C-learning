#include<stdio.h>
int main()
{
	char ch,ch1,ch2;
	FILE *fp=fopen("data.txt","r+");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}

	rewind(fp);
	printf("ENTER THE CHAR: ");
	scanf(" %c",&ch1);
	printf("ENTER THE REPLACE CHAR: ");
	scanf(" %c",&ch2);

	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==ch1)
		{
			fseek(fp,-1,SEEK_CUR);
			fputc(ch2,fp);
		}
	}

	rewind(fp);
	 while((ch=fgetc(fp))!=EOF)
        {
                printf("%c",ch);
        }


}
