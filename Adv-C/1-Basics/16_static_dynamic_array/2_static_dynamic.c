#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("clear");

	//int i, *p[3];

	int i;
	int **p = malloc(3 * sizeof(int *));
	for(i = 0; i < 3; i++)
	{
		printf("The Value @ address %p : %p\n", p + i, *(p + i));

	}

	for(i = 0; i < 3; i++)
	{
		*(p + i) = malloc(3 * sizeof(int));
		printf("The Value @ address %p : %p\n", p + i, *(p + i));

	}
	for(i = 0; i < 3; i++)
	{
		*(*(p + 0) + i) = 10 * (i + 1);
		*(*(p + 1) + i) = i + 1;

		*( *(p + 2) + i) = (*(p[0] + i)) + (*(p[1] + i));

		printf("The Value @ address %p : %d\n", p[0] + i, *(p[0] + i));
		printf("The Value @ address %p : %d\n", p[1] + i, *(p[1] + i));
		printf("The Value @ address %p : %d\n", p[2] + i, *(p[2] + i));

	}
	printf("\n\n");

	return 0;
}
