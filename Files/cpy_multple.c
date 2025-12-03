
// copy source to multiple destination

#include<stdio.h>
int main(int argc,char *argv[])
{
	 int i,j=1;  
	 char ch, op;

    if(argc<4)   
    printf("usage: ./a.out src_dest\n");

        FILE *fs=fopen("data.txt","r");
        if(fs==NULL)
		printf("file is not exist");
	for(i=2;i<argc;i++)
            {
		    FILE *fd=fopen(argv[i],"r");
		    if(fd!=NULL)
		    {
			    printf("----------------------file%d is exist----------------------\n",j++);
			    printf(" do you want overwrite?\n");
			    scanf(" %c",&op);
			    if(op=='y')
			    {
				    FILE *fd=fopen(argv[i],"w");
			    while((ch=fgetc(fs))!=EOF)
                               {
                                fputc(ch,fd);
			       }
                            rewind(fs);
			    printf("COMPLETED\n");
			    }
			    else
				    printf("NOT COMPLETED\n");
				    continue;

		    }

	    }
}
