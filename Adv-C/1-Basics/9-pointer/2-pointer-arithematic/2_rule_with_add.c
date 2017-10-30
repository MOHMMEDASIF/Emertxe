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

	//printing the array
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("value at address :%pis %d\n", &a[i], a[i]);
	}

	
	//printing the array
	printf("Pointer notation:\n");
	for (i = 0; i < 4; i++)
	{
		printf("The Value of address %p is:%d\n", &*(a+i), *(a+i));
	}
	//printing the array
	printf("Pointer notation:\n");
	for (i = 0; i < 4; i++)
	{
		printf("The Value of address %p is %d\n", i+a, *(i+a));
	}
	//printing the array
	printf("Pointer notation:\n");
	for (i = 0; i < 4; i++)
	{
		printf("The Value of address %p is:%d\n", &i[a], i[a]);
	}






	return -1;
}
