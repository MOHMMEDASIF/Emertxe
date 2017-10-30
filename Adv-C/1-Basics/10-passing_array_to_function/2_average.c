/*
	Demo code for printing and calculating the average of the array
*/

#include <stdio.h>

void populate(int a[], size_t n);
float average(int a[],size_t n);
void print(int a[], size_t n,float avg);

int main()
{
	int a[5];

	size_t n = sizeof(a)/sizeof(int);
	
	populate(a, n);

	float avg = average(a, n);

	print(a, n, avg);

	return 1;
}
void populate(int a[],size_t n)
{
	int i;

	printf("Enter the value of an array\n");
	for(i = 0; i < n; i++)
	{
		printf("a[%d]:",i);
		scanf("%d", &a[i]);
	}

}
float average(int a[], size_t n)
{
	int sum = 0;
	int i;

	for(i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}

	return ((float)sum / n);
}

void print(int a[], size_t n,float avg)
{
	int i;

	printf("\narray values are\n");
	for(i = 0; i < n; i++)
	{
		printf("a[%d]:%d\n", i, a[i]);
	}
	printf("Average is %lf\n ", avg);
}
