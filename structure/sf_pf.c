#include<stdio.h>
struct student
{
	int rollno;
	char name[20] ;
	float mark;
};
int main()
{ 
	struct student st1,st2;
	printf("ENTER THE DATA;");
	scanf("%d%s%f",&st1.rollno,st1.name,&st1.mark);
	scanf("%d%s%f",&(&st2)->rollno,(&st2)->name,&(&st2)->mark);
	printf("rollno:%d\nname:%s\nmark:%f",st1.rollno,st1.name,st1.mark);
	printf("\nrollno:%d\nname:%s\nmark:%f",(&st2)->rollno,(&st2)->name,(&st2)->mark);

}

