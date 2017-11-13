#include <stdio.h>
#define R 3
#define C 2

int main()
{
	system("clear");

	//Define 2D array
	int a[R][C] = {1,2,3,4,5,6};
	int i, j;

	//method-1
	{
		int *np;


		for(i = 0; i < R; i++)
		{
			np = a[i];
			for(j = 0; j < C; j++ )
			{
				printf("a[%d][%d]: %d \t", i, j, *np);
				np++;

			}

			printf("\n");

		}

	}

	//method-2
	{
		int (*p)[C] = a;
		int *np;
	for(i = 0; i < R; i++)
	{
		np = p[i];
		for(j = 0; j < C; j++ )
		{
			printf("a[%d][%d]: %d \t", i, j, *np);
			np++;

		}
	}
}


	{
		int (*p)[C] = a;
		int *np;
	for(i = 0; i < R; i++)
	{
		np = (int *)p;
		for(j = 0; j < C; j++ )
		{
			printf("a[%d][%d]: %d \t", i, j, *np);
			np++;

		}
		p++;
		printf("\n");
	}
}
}

