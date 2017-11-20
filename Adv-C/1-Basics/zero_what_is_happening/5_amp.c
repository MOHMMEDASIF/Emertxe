#include <stdio.h>

void foo(int *p);
int main()
{
	int i = 97, *p = &amp;i;
	foo(&i);

	printf("%d", *p);
}

void foo(int *p)
{
	int j =2;
	p = &j ;

	printf("%d", *p);
}
