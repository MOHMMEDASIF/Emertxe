/*
	Demo code to impliment the array in function
*/

#include <stdio.h>

void print_array(int a[], int n, size_t value);

int main()
{
	int a[] = {10, 20, 30, 40};

	print_array(a, sizeof(a) / sizeof(int), sizeof(a) / sizeof(int));

	return 1;
}


void print_array(int a[], int n, size_t value)
{
	int i;

	printf("size_t:%d", value);
	printf("int:%d", n);

	for(i = 0; i < n; i++)
	{
		printf("a[%d]: %d\n", i, a[i]);
	}
	
}

