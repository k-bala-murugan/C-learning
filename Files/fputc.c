#include<stdio.h>
  int main(int argc,char *argv[]) // command line arguments
  {
     
          FILE *fp = fopen(argv[1],"w"); // opening file in write mode

	  fputc('m',fp);
	  fputc('a',fp);
	  fputc('n',fp);
	  fclose(fp);
  
  }
