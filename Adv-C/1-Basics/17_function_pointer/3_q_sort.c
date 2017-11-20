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
	int a[5] = {5, 4, 3, 2, 1};
	qsort(a, 5, sizeof(int), int_compare);

	for(i = 0; i < 5; i++)
	{
		printf("a[%d]:%d\n", i, *(a + i));
	}

	return 0;
}
