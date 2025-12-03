#include<stdio.h>
int main()
{
	char ch;
       int line=0,file_size=0,bigline=0,bigline_length=0,char_count=0;	
	FILE *fp=fopen("data.txt","r");
	while(((ch=fgetc(fp))!=EOF))
	{
		char_count++;
		file_size++;
		if(ch=='\n')
		{
			line++;
			if(char_count > bigline_length)
			{
				bigline=line;
				bigline_length=char_count;
			}
			char_count=0;
		}
	}
	printf("file_size = %d\n",file_size);
        printf("no.of lines = %d\n",line);
        printf("big_line = %d      big_line_length = %d\n",bigline,bigline_length);
}


