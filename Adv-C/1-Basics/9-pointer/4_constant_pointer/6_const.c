#include <stdio.h>

int main()
{
	//const
	int a = 10;
	const int *p ;//= &a;
	

	printf("value of a is %d\n", a);
	printf("value of &a is %p\n", &a);
	printf("value of p is %p\n", p);
	printf("value of *p is %d\n", *p);
	
	*p = 20;
	a = 20;

	printf("value of a is %d\n", a);
	printf("value of &a is %p\n", &a);
	printf("value of p is %p\n", p);
	printf("value of *p is %d\n", *p);
	
}
