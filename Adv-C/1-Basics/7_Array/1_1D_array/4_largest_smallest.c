/*
Demo code to impliment 1-d array
*/

#include<stdio.h>

int main()
{
	//define an array
	int a[5];
	int i,j;
	int temp;

	//read an array
	puts("Enter the array");
	for(i = 0 ; i < sizeof(a) / sizeof(int); i++)
	{
		scanf("%d", &a[i]);
	}
	
	//printf array before reverse
	puts("Before reverse");
	for(i = 0 ; i < sizeof(a) / sizeof(int); i++)
	{
		printf("a[%d]:%d\n", i, a[i]);
	}
	
	for(i = 0; i < (sizeof(a) / sizeof(int)) - 1;  i++)
	{
	for(j = i + 1; j < (sizeof(a) / sizeof(int)) ;  j++)
	{
		if ( a[i] > a[j] )
		{
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}

		
	}
	}

	//printf array after reverse
	puts("After reverse");
	for(i = 0 ; i < sizeof(a) / sizeof(int); i++)
	{
		printf("a[%d]:%d\n", i, a[i]);
	}

	printf("Smallest-value is a[0]:%d\n", a[0]);
	printf("Largest-value is a[n]:%d\n", a[(sizeof(a)/sizeof(int))-1]);


	return 0;
}
