#include<stdio.h>
int main()                 //compine two strings upto given source value
{
	char s[20],d[50];   //n=3 like that
	int i,j,n;
	printf("Enter the sourse string\n");	
	scanf("%s",s);
	printf("Enter the destination string\n");
	scanf("%s",d);
	printf("Enter the N:");
	scanf("%d",&n);

	for(j=0;d[ j ];j++);
	for(i=0;(i<n)&&(d[ j ]=s[i]);i++,j++);
	d[j]='\0';
	printf("source --> %s\n",s);
	printf("d --> %s\n",d);
}   


/*


#include<stdio.h>
char *cat(char*,char*,int);
int main()
{   int n;
    char s[30],d[30];
    printf("Source:");                    //combine to string using     user defined
    scanf("%s",s);
    printf("Destination:");
    scanf("%s",d);
    printf("N value:");
    scanf("%d",&n);
    char *val=cat(d,s,n);
    printf("Combined:%s",d);
}
char *cat(char*d,char*s,int n)
{
    int i,j;
    for(i=0;d[i];i++);
    for(j=0;j<n;j++,i++)
    {
        d[i]=s[j];
    }
    d[i]='\0';
    return d;
}

*/
