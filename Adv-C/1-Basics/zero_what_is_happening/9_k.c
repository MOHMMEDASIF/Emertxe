#include <stdio.h>
int *m();

int main()
{
	int *k = m();
	printf("hello ");
	printf("%d", k[0]);
}

int *m()
{
	int a[2] = {5, 8};
	return a;
}
