/************************************************************************************************************************************************************

Title		:
Author		:
Date		:
description	:

************************************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void memory_allocation(float **p, int n, int *s);
void populate(float **p, int n, int *s);
void average(float **p, int n, int *s);

int main()
{
	system("clear");
	char option;

	do
	{
		float *p[3];
		int size[3];

		memory_allocation(p, 3, size);

		populate(p, 3, size);
			
		average(p, 3, size);

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

void memory_allocation(float *p[3], int n, int *s)
//void memory_allocation(float **p, int n, int *s)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Enter 'n' Value for %d array\n", i);
		scanf("%d", s + i);
		*(p + i) = malloc((*(s + i) + 1) * sizeof(float));
		printf("%p\n", *(p + i));
	}
}

void populate(float **p, int n, int *s)
{
	int i, j, k;

	for(i = 0; i < 3; i++)
	{
		printf("Enter %d items\n", *(s + i));
		for(j = 0; j < *(s + i); j++)
		{
			scanf("%f", *(p + i) + j);
		}
		for(k = 0; k < *(s + i); k++)
		{

			printf("a[%d]:%f\n", k, *(*(p + i) + k));
		}
	}
}

void average(float **p, int n, int *s)
{

	float sum = 0;
	int i, j;

	for(j = 0; j < n; j++)
	{
		sum = 0;
		printf("sum [%d]:%d\n", j, *(s + j));
		for(i = 0; i < *(s + i); i++)
		{
			printf("a[%d]:\t %f\n",j, *(p[j] + i) );
			sum = sum + *(p[j] + i);
		}
			printf("sum: %f\n", sum);
		//*(p[*(s + j) + 1]) = ((float)sum / (*(s + i)));
	}

}

