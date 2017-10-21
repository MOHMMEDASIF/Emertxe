/*
	code to print the factorial of the given number
*/

#include<stdio.h>

int factorial(int);

int main()
{
	int num;

	//prompt the user for the Number
	printf("Enter the Number:");
	scanf("%d", &num);

	//calling the function
	int result = factorial(num);
	
	printf("%d", result);

	return 0;
}

int factorial(int num)
{
	int result;
	int fact,i;

	fact = num;

	for(i = 1; i < num ; i++)
	{
		 result = fact * (num - i);
	}

	return result;

}
