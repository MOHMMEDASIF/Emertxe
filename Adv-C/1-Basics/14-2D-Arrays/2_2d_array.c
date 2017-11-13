#include <stdio.h>
#define R 3
#define C 2

int main()
{
	//Define 2D array
	int a[R][C] = {1,2,3,4,5,6};
	int i, j;
	int *p_str[2] = a;

	//printing the arrays using normal notations
	for(i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++ )
		{
			printf("a[%d][%d]: %d \t", i, j, p[i][j]);

		}

		printf("\n");

	}
	{
		int *p_str = a;
	//printing the array value using single pointers
	i = 0;
	while(*p_str <= sizeof(a))
	{
		printf("a[%d]%d\n", i, *p_str);
		i++;
		p_str++;

	}

	}
	for(i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++ )
		{
			printf("a[%d][%d]: %d \t", i, j, *(p[i]+j));

		}

		printf("\n");

	}
	for(i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++ )
		{
			printf("a[%d][%d]: %d \t", i, j, *(*(p + i) + j));

		}

		printf("\n");

	}

	return 0;
}
