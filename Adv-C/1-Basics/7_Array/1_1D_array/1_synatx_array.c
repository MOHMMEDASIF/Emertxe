/*
Demo code to impliment 1-d array
*/

#include<stdio.h>

int main()
{
	//define an array
	int a[5];
	int i;

	//read an array
	for(i = 0 ; i < sizeof(a) / sizeof(int); i++)
	{
		scanf("%d", &a[i]);
	}

	//print an array
	for(i = 0 ; i < sizeof(a) / sizeof(int); i++)
	{
		printf("a[%d]:%d\n", i, a[i]);
	}

	return 0;
}
