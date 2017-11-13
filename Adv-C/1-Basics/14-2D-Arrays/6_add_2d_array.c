#include <stdio.h>
#define R 3
#define C 2

void print_array(int (*p)[C]);
void populate(int (*p)[C]);
int  (* add(int (*a)[C], int (*b)[C]))[C];

int main()
{
	system("clear");

	//Define 2D array
	int a[R][C], b[R][C];
	int i, j;

	printf("Enter The value of array-1:\n");
	populate (a);

	printf("Enter The value of array-2:\n");
	populate(b);

	int (*c)[C] = add(a,b);


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
int (* add(int (*a)[C], int (*b)[C]))[C]
{
	static int c[R][C];
	int i, j;

	for(i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++)
		{
			( *(c + i))[j]  = *( *(a + i) + j) + *(b[i] + j);
		}
	}
	return c;
}
