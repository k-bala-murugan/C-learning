#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
    int roll;
    char name[20];
    float mark;
    struct st *next;
};
void rev_link(struct st **);
int count(struct st *);
void rev_data(struct st*);
void add_begin(struct st**);
void print(struct st*);
void save(struct st*);
struct st *hptr=0;


int main()
{
    char op;
    do
    {
     add_begin(&hptr);
     printf("-------------do you need more data-----------\n");
     scanf(" %c",&op);
    }while('y'==op);
    print(hptr);
    rev_link(&hptr);
    print(hptr);
   // save(hptr);
}


void rev_link(struct st **ptr)
{
        int i,j;
	 int c=count(*ptr);
        struct st **p=(struct st **)malloc(c*sizeof(struct st *));
        for(i=0;i<c;i++)
        {
                p[i]=*ptr;
                *ptr=(*ptr)->next;
        }
        p[0]->next=0;
        for(i=1;i<c;i++)
        {
                p[i]->next=p[i-1];
        }
        *ptr=p[c-1];
}


int count(struct st *ptr)
{
        int c=0;
        while(ptr!=0)
        {
                ++c;
                ptr=ptr->next;
        }
        return c;
}

void rev_data(struct st *ptr)
{
        struct st temp;
        int i,j;
	int c=count(ptr);
        int size=sizeof(struct st)-8;
        struct st **p=(struct st**)malloc(c*sizeof(struct st*));
        for(i=0;i<c;i++)
        {
                p[i]=ptr;
                ptr=ptr->next;
        }
        for(i=0,j=c-1;i<j;i++,j--)
        {
                memcpy(&temp,p[i],size);
                memcpy(p[i],p[j],size);
                memcpy(p[j],&temp,size);
        }
}


void add_begin(struct st **ptr)
{
    struct st *temp=(struct st*)malloc(sizeof(struct st));
    printf("Enter the student details:\n");
    scanf("%d%s%f",&temp->roll,temp->name,&temp->mark);
    temp->next=hptr;
    hptr=temp;
}

void print(struct st *ptr)
{
    printf("nodes printing\n");
    printf("----ROLL--NAME--MARKS-----\n");
    while(ptr!=0)
    {
    printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
    ptr=ptr->next;
    }

}
void save(struct st *ptr)
{
    FILE *fp=fopen("f1.txt","w");
    while(ptr!=0)
    {
        fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
        ptr=ptr->next;
    }

}

