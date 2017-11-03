/*
	Demo code for printing and calculating the average of the array
*/

#include <stdio.h>

void populate(int a[], size_t n);
void reverse(int a[], size_t n);
void print(int a[], size_t n);

int main()
{
	int a[5];

	size_t n = sizeof(a)/sizeof(int);
	
	populate(a, n);

	reverse(a, n);

	print(a, n);

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

void print(int a[], size_t n)
{
	int i;

	printf("\narray values are\n");
	for(i = 0; i < n; i++)
	{
		printf("a[%d]:%d\n", i, a[i]);
	}
}

void reverse(int a[], size_t n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{

				printf("\n\ninteration :%d\n:", i);
				temp = a[i];
				printf("interation :%d\t", i);
				printf("temp :%d\n", temp);
				a[i] = a[n - 1];
				printf("interation :%d\t", i);
				printf("a[%d] :%d\n", i, a[i]);
				a[n - 1] = temp ;
				printf("interation :%d\t", i);
				printf("a[%d] :%d\n", n-1, a[n-1]);
				n--;
				printf("End of interation :%d\n\n", i);
	}
}
