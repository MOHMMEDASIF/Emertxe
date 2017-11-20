#include <stdio.h>
#include <stdlib.h>

int int_compare(const void *a, const void *b);

int int_compare(const void *a, const void *b)
{
	if( * (int *)a > *(int *)b )
	{
		return 1;
	}
	else if( * (int *)a < *(int *)b )
	{
		return -1;
	}
	else
	{
		return 0;
	}

}

int main()
{
	int i;
	int a[5] = {1, 2, 3, 4, 5};

	int key = 30;

	int *p	= bsearch(&key, a, 5, sizeof(int), int_compare);

		printf("address %p\n", p);
		printf("address %p\n", &a[2]);

	return 0;
}
