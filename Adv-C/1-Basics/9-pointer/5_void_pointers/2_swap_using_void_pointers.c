#include <stdio.h>

void generic_swap(void *p, void *q, size_t n);

int main()
{
	int a[] = {10,20,30,40};
	int b[] = {50,60,70,80}, i;

	generic_swap(&a, &b, sizeof(a));

	for(i = 0; i < sizeof(a)/sizeof(int); i++ )
	{
		printf("\nb[%d]:%d",i, i[b]);

	}

	double c[] = {1.2,2.4};
	double d[] = {3.2,4.5};
	generic_swap(&c, &d, sizeof(c));

	for(i = 0; i < sizeof(c)/sizeof(double); i++ )
	{
		printf("\nd[%d]: %lf",i, i[d]);

	}
	return 0;
}
void generic_swap(void *p, void *q, size_t n)
{
	int i;
	char temp;
	for(i = 0; i < n; i++)
	{
		temp = *((char *)p + i);
		*((char *)p + i) = *((char *)q + i);
		*((char *)q + i) = temp;

	}
}
