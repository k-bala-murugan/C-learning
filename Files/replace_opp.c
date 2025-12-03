
#include<stdio.h>          //replace the char with opposite char in given file
int main ()
{ 
	char ch,letter;
        FILE *fp=fopen("data1.txt","r+");
	printf("File data:\n");
        while((ch=fgetc(fp))!=EOF)
        {
                printf(" %c",ch);
	}
	rewind(fp);
	printf("Enter the letter to replace:");
	scanf("%c",&letter);
        while((ch=fgetc(fp))!=EOF)
        {
                if(ch==letter)
		{
			ch=ch^32;
			fseek(fp,-1,SEEK_CUR);      //decrement 1 -> current position 
			fputc(ch,fp);
		}

        }
        rewind(fp);

        printf("data saved in files");

        fp=fopen("data1.txt","r");
        printf("\n");
        while((ch=fgetc(fp))!=EOF)
        {
                printf(" %c",ch);
        }
}

