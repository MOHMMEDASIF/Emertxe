#include <stdio.h>
#include <stdlib.h>

int double_compare(const void *a, const void *b);

int double_compare(const void *a, const void *b)
{
	if( * (double *)a > *(double *)b )
	{
		return 1;
	}
	else if( * (double *)a < *(double *)b )
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
	double a[5] = {5.0, 4.0, 3.0, 2.0, 1.0};
	qsort(a, 5, sizeof(double), double_compare);

	for(i = 0; i < 5; i++)
	{
		printf("a[%d]:%lf\n", i, *(a + i));
	}

	return 0;
}
