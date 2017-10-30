/*
	Demo code to demonstrate Rule no 1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear the output screen
	system("clear");

	//define an array
	int a[4] = {10, 20, 30, 40};

	//declare the pointer valrable
	int *p = a;

	//printing the array
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("a[%d]:%d\n", i, p[i]);
	}
	//printing the array
	printf("Pointer notation:\n");
	for (i = 0; i < 4; i++)
	{
		printf("a[%d]:%d\n", i, *(p+i));
	}
	//printing the array
	printf("Pointer notation:\n");
	for (i = 0; i < 4; i++)
	{
		printf("a[%d]:%d\n", i, *(i+p));
	}
	//printing the array
	printf("Pointer notation:\n");
	for (i = 0; i < 4; i++)
	{
		printf("a[%d]:%d\n", i, i[p]);
	}






	return -1;
}
