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
 struct st *hptr=0;
 void delete_node(struct st **);
 void delete_all(struct st **);
 void rev_link(struct st **);
 void add_end(struct st **);
 void save(struct st *);
int count(struct st *); 
 void print(struct st *);
 void rev_data(struct st *);
int main()
{
	char op;
	do
	{
		add_end(&hptr);
		printf("-------------do you need more data-----------\n");
		scanf(" %c",&op);

	}while(op=='y');
	print(hptr);
	rev_link(&hptr);
	printf("After the revering the link");
	print(hptr);
	delete_node(&hptr);
	printf("after deleing nodes\n");
	print(hptr);



}


void delete_all(struct st **ptr)
{
	struct st *temp;
	while(*ptr!=0)
	{
		temp=*ptr;
		*ptr=temp->next;
		free(temp);
	}
}


void delete_node(struct st **ptr)
{ 
	int n;
	struct st *prev;
	struct st *temp=*ptr;
	printf("Enter the node to delete:");
	scanf("%d",&n);
	while(temp!=0)
	{
		if(temp->roll==n)
		{
			if(temp==*ptr)
			{
				*ptr=temp->next;
			}
			else
			{
				prev->next=temp->next;
			}

			free(temp);
			return;

		}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}

}



void add_end(struct st **ptr)
{
	struct st *temp=(struct st *)malloc(sizeof(struct st));
	printf("Enter the student data:\n");
	scanf("%d %s %f",&temp->roll,temp->name,&temp->mark);
if(*ptr==0)
{
temp->next=*ptr;
*ptr=temp;
}
else
{
	struct st *last=*ptr;
	while(last->next!=0)
	{
		last=last->next;
	}
	temp->next=last->next;
	last->next=temp;
}
}

void rev_link(struct st **ptr)
{
	int i;
	int n=count(*ptr);
	struct st *temp=*ptr;
	struct st **p=(struct st**)malloc(n*sizeof(struct st*));
	for(i=0;i<n;i++)
	{
		p[i]=temp;
		temp=temp->next;
	}
	p[0]->next=0;
	for(i=1;i<n;i++)
	{
		p[i]->next=p[i-1];
	}
	*ptr=p[n-1];
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
    FILE *fp=fopen("f2.txt","w");
    while(ptr!=0)
    {
        fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
	
        ptr=ptr->next;
    }

}

int count(struct st *ptr)
{
	int count=0;
	while(ptr!=0)
	{
	++count;
	ptr=ptr->next;
	}
	return count; 
}
void rev_data(struct st *ptr)
{
	 int n=count(ptr);
	int i,j;
	int size=sizeof(struct st)-8;
	struct st temp;
	struct st **p=(struct st**)malloc(n*sizeof(struct st *));
	for(i=0;i<n;i++)
	{
		p[i]=ptr;
		ptr=ptr->next;
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		memcpy(&temp,p[i],size);
		memcpy(p[i],p[j],size);
		memcpy(p[j],&temp,size);
	}
}
