/*
	Demo code for Nested-if 
*/

#include<stdio.h>

int main()
{
	//declare the variable
	int num;

	//prompt the user for the Input
	printf("Enter the value:");
	scanf("%d", &num);

	//validate the user_input 
	if ((num % 2 == 0) && (num % 5 == 0))
	{
		printf("%d:Multiple of Both 2 and 5", num);
	
	}
	else if ((num % 2 == 0) && (num % 5 != 0))
	{
		printf("%d:Multiple of 2 and not multiple of 5", num);
	}
	else if ((num % 2 != 0) && (num % 5 == 0))
	{
		printf("%d:Multiple of 5 and not multiple of 2", num);
	}
	else
	{
		printf("%d:not Multiple of both 2 and 5", num);
	}

	return 0;
}
