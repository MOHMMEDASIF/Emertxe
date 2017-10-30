/*
	Demo code to impliment the array in function
*/

#include <stdio.h>

void print_array(int a[], size_t n);

int main()
{
	int a[] = {10, 20, 30, 40};

	print_array(a, sizeof(a) / sizeof(int));

	return 1;
}


void print_array(int a[], size_t n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("a[%d]: %d\n", i, a[i]);
	}
	
}

