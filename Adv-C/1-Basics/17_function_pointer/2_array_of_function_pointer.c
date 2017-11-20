#include <stdio.h>

int sum(int a, int b);
int prod(int a, int b);
int div(int a, int b);

int main()
{
	int i;
	int (*fp[3])(int, int) = {sum , prod, div};

	for(i = 0; i < 3; i++)
	{
		printf("%d\n", fp[i](10,5));

	}

	return 0;
}
int sum(int a, int b)
{
	return a + b;
}
int prod(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
