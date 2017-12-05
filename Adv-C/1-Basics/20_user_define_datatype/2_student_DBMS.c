#include <stdio.h>
#include <string.h>

typedef struct student
{
	char name[20];
	int roll_no;
}student_t;

int main()
{
	int i;
	student_t a[2] ;

	strcpy(a[0].name, "A");
	//a[0].roll_no = 24;
	//(a + 0) -> roll_no = 27;
	(*(a + 0)) . roll_no = 28;

	strcpy(a[1].name, "B");
	a[1].roll_no = 23;
	
	for(i = 0; i < 2; i++)
	{
	printf("%d.student Details\n", i + 1);
	printf("name: %s\n", a[i].name);
	printf("roll_no: %d\n", a[i].roll_no);
	}
}
