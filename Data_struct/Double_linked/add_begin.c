// Double linked list  [  add begin  ]

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
	struct st *prev;
	int roll;
	char name[20];
	float mark;
	struct st *next;
};
struct st *hptr=0;
int count(struct st *);
void rev_data(struct st *);
void add_begin(struct st **);
void rev_link(struct st **);
void delete_node(struct st **);
int main()
{
	char op;
       	do
	{
		add_begin(&hptr);
		printf("-------------do you need more data-----------\n");
		scanf(" %c",&op);
	
	}while(op=='y');
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

void add_begin(struct st **ptr)
{
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the data:");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->mark);
	temp->prev=NULL;
	temp->next=*ptr; 
	if(*ptr!=0)
	{
		(*ptr)->prev=temp;
	}
	*ptr=temp;
}

void rev_link(struct st **ptr)
{
	struct st *temp;
        while(*ptr!=0)
        {
                temp=(*ptr)->next;
                (*ptr)->prev=(*ptr)->next;
                (*ptr)->next=temp;
                *ptr=(*ptr)->prev;
        }
        *ptr=temp->prev;
}

void rev_data(struct st *ptr)
{
	int i, c=count(ptr);
	struct st temp;
	struct st *p1,*p2;
	int size=sizeof(struct st)-16;
	p1=ptr;
	p2=ptr;
	for(i=0;i<c-1;i++)
		p2=p2->next;
	for(i=0;i<c/2;i++)
	{
		memcpy(&temp.roll,&p1->roll,size);
		memcpy(&p1->roll,&p2->roll,size);
		memcpy(&p1->roll,&temp.roll,size);
		p1=p1->next;
		p2=p2->prev;
	}

}

void delete_node(struct st **ptr)
{
        int n;
        struct st *temp=*ptr;
        printf("Enter the node to delete:");
        scanf("%d",&n);
        while(temp!=0)
        {
                if(temp->roll==n)
                {
                        if(temp==*ptr)
                        {
                                temp->next->prev=temp->prev;
                                *ptr=temp->next;
                        }
                        else
                        {
                                temp->prev->next=temp->next;
                                if(temp->next!=0)
                                        temp->next->prev=temp->prev;

                        }
                        free(temp);
                        return;

                }
                else
                        temp=temp->next;
        }
}

