#include <stdio.h>
#define R 3
#define C 2

void print_array(int (*p)[C]);

int main()
{
	system("clear");

	//Define 2D array
	int a[R][C] = {1,2,3,4,5,6};
	int i, j;

	print_array(a);

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

