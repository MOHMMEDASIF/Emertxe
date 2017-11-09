#include <stdio.h>

void g_c(void *p, void *q, size_t n);

int main()
{
	int a = 0xAABBCCDD;
	int b;

	g_c(&a, &b, sizeof(int));

	printf("A:%X\n", b);
	double c = 1.23;
	double d;

	g_c(&c, &d, sizeof(double));
	printf("d:%f\n", d);
	return 0;
}

void g_c(void *p, void *q, size_t n)
{
	for( ; n > 0; n--)
	{
		*(char *)q = *(char *)p;
		p = p + sizeof(char);
		q = q + sizeof(char);
	}

}
