#include <stdio.h>

int sum(int a, int b);
int prod(int a, int (*fp)(int, int));

int prod(int a, int (*fp)(int, int))
{
	return a * (*fp)(1, 2);
}

int sum(int a, int b)
{
	return a + b;
}

int main()
{
	int r = prod(10, sum);

	printf("result : %d\n", r);
}
