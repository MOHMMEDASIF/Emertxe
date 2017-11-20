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
	}
}

void populate(float **p, int n, int *s)
{
	int i, j;

	for(i = 0; i < 3; i++)
	{
		printf("Enter %d items\n", *(s + i));
		for(j = 0; j < *(s + i); j++)
		{
			scanf("%f\n", *(p + i) + j);

		}
	}
}


void average(float **p, int n, int *s)
{
	float sum = 0;
	int i, j;

	for(j = 0; j < n; j++)
	{
	for(i = 0; i < *(s + i); i++)
	{
		sum = sum + *(p[j] + i) ;	
	}
		*(p[*(s + j) + 1]) = ((float)sum / (*(s + i)));
	}

}

