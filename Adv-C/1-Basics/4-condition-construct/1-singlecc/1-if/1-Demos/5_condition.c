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
	if (num % 2 == 0)
	{
		printf("%d:Not an odd number\n", num);
	
	}
	else if ((num % 2 != 0) && (num % 9 == 0))
	{
		printf("%d: is an odd Number and multiple of 9\n", num);
	}
	else if ((num % 2 != 0) && (num % 9 != 0))
	{
		printf("%d: is an odd Number but not a multiple of 9\n ", num);
	}

	return 0;
}
