#include <stdio.h>
#include <stdlib.h>
#define R 3
#define C 2

void print_array(int (*p)[C]);
void populate(int (*p)[C]);
void add(int (*a)[C], int (*b)[C], int (*c)[C]);

int main()
{
	system("clear");

	//Define 2D array
	int (* a)[2] = malloc(3 * sizeof(int [2]));
	int  b[R][C], c[R][C];
	int i, j;

	printf("Enter The value of array-1:\n");
	populate (a);

	printf("Enter The value of array-2:\n");
	populate(b);

	add(a,b,c);


	print_array(c);

}



//method-1
void print_array(int (*p)[C])
{
	int *np;
	int i,j;	

	for(i = 0; i < R; i++)
	{
		np = p[i];
		for(j = 0; j < C; j++ )
		{
			printf("a[%d][%d]: %d \t", i, j, *(np + j));

		}

		printf("\n");
	}

}

void populate(int (*p)[C])
{
	int i, j;

	for(i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++)
		{
			printf("a[%d][%d]:", i, j);
			scanf("%d", p[i]+j);
		}
		printf("\n");
	}

}
void add(int (*a)[C], int (*b)[C], int (*c)[C])
{
	int i, j;

	for(i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++)
		{
			( *(c + i))[j]  = *( *(a + i) + j) + *(b[i] + j);
		}
	}

}
