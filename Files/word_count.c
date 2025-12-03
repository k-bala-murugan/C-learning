#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        char ch,sub_str[20];
	char line_size[1024];
	int count=0;
        FILE *fp=fopen("data.txt","r");
        printf("FILE DATA\n");
        while((ch=fgetc(fp))!=-1)
                        printf("%c",ch);

                        rewind(fp);

                        printf("\nEnter the substring:");
			scanf("%s",sub_str);          //scaning the substring
                        char *buf=(char*)malloc(sizeof(line_size));
                        while(fgets(buf,1024,fp)!=NULL) //take string by string
                        {
				char *pos=buf;
                        while((pos=strstr(pos,sub_str))!=NULL)
			{
                        count++;
			pos=pos+strlen(sub_str);  // add substring with current position 

                        }
			}
			printf("NO OF WORDS PRESENT:%d",count);
                        
}


/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        char ch,sub_str[20];                
        int count=0;
       long int size;
        FILE *fp=fopen("data.txt","r");
        printf("FILE DATA\n");
        while((ch=fgetc(fp))!=-1)
                        printf("%c",ch);

                        size=ftell(fp);  //count of each char in file
                        printf("\ncount=%ld",size);
                        rewind(fp);

                        printf("\nEnter the substring:");
                        scanf("%s",sub_str);          //scaning the substring
                        char *buf=(char*)malloc(size*sizeof(char));
                        while(fgets(buf,size,fp)!=NULL) //take string by string
                        {
                                char *pos=buf;
                        while((pos=strstr(pos,sub_str))!=NULL)
                        {
                        count++;
                        pos=pos+strlen(sub_str);  // add substring with current position 

                        }
                        }
                        printf("NO OF WORDS PRESENT:%d",count);

}

*/
