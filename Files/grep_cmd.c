#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char ch,sub_str[20];
	int count;
	FILE *fp=fopen("data.txt","r");
	printf("FILE DATA\n");
	while((ch=fgetc(fp))!=-1)
			printf("%c",ch);

			count=ftell(fp);
			printf("\ncount=%ld",ftell(fp));
			rewind(fp);
			printf("\nENTER THE SUBSTRING:");
			scanf("%s",sub_str);
			char *buf=(char*)malloc(count*sizeof(char));
			while(fgets(buf,count,fp)!=NULL)
			{
			if(strstr(buf,sub_str)!=NULL)	
			printf("%s",buf);
			
			}
			}



