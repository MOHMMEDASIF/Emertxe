#include <stdio.h>

int main()
{
	int a[4] = {10, 20, 30, 40};

	int *p = a;
	int *q = a + 4;

	printf("q-p:%d\n", q + p);

	return 1;
}
