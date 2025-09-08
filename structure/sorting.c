// scan the 5 student data and sort the data in the basis of rollno,marks,name 

#include<stdio.h>
#include<string.h>
struct st
{
    int roll;
    char name[20];
    float mark;
};

int main()
{
    int i,j,op,n=5;
    struct st s[5],temp;
    printf("Enter the student data:");
    for(i=0;i<5;i++)
    scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].mark);
    for(i=0;i<5;i++)
    printf("data %d: %d %s %f\n",i+1,s[i].roll,s[i].name,s[i].mark);
    printf("-----------ENTER 1)rollno 2)name 3)mark-------------");
    printf("\n               option:");
    scanf("%d",&op);
    if((op>3)||(op<1))
    printf("PRESS THE CORRECT OPTION   (*_*)\n");
    if((op<4)&&(op>0))
    {
      for(i=0;i<n-1;i++)
       {
        for(j=0;j<n-i-1;j++)
        {
            if(op==1)
            {
                if(s[j].roll>s[j+1].roll)
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
            }
            if(op==2)
            {
                if((strcmp(s[j].name,s[j+1].name)>0))
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
                
            }
            if(op==3)
            {
                if(s[j].mark>s[j+1].mark)
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
                
            }
            
        }                                                                                
    }
    for(i=0;i<5;i++)
    printf("data %d: %d %s %f\n",i+1,s[i].roll,s[i].name,s[i].mark);
    } 
}
    
