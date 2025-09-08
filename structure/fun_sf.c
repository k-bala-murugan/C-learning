//WAP to design the functions scan() and print() to scan and print the struct variable data

#include<stdio.h>
struct st
{
	int rollno;
	char name[20];
	float mark;
};
 void scan(struct st*);
 void print(struct st*);

int main()
{
	struct st v;
	scan(&v);
	print(&v);
}
void scan(struct st*p)
{
	//scanf("%d%s%f",&(*p).rollno,(*p).name,&(*p).mark);
	scanf("%d%s%f",&p->rollno,p->name,&p->mark);
}
void print(struct st *p)
{
//	printf("rollno:%d\nname:%s\nmark:%f",v.rollno,v.name,v.mark);
	 printf("rollno:%d\nname:%s\nmark:%f",p->rollno,p->name,p->mark);
}

