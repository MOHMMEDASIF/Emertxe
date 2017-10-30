/************************************************************************************************************************************************************

Title		: Fibonacci Series using recursive Function
Author		: MOHMMED ASIF.S
Date		: 29/10/2017
description	: Using Recursive Method to calculating fibonacci series

 ************************************************************************************************************************************************************/

#include<stdio.h>

int fibonacci(int first_number,int next_number,int limit); 

int main()
{
	char option;

	do
	{
		//declaration of the Variables
		int number, limit;
		int first_number = 0;
		int next_number = 1;

		//prompt the user for the Number
		printf("Enter the Number:");
		scanf("%d", &number);

		printf("Fibonacci Series of the Given Number %d are:", number);
		printf("\t%d,\t",first_number);
		printf("%d,\t",next_number);

		//function called to print the Numbers
		fibonacci(first_number, next_number, number);

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

int fibonacci(int first_number,int next_number,int limit)
{
	int sum;
	
	//validating for the positive and negative number
	if (limit > 1)
	{
		//addition of previous numbers
		sum = first_number + next_number;

		//validating for the lessers number then the Input NUmber
		if (sum <= limit)
		{
			printf("%d,\t", sum);
			fibonacci(next_number, sum, limit);
		}
		else
		{
			return 1;
		}
	}
	else if (limit < 1)
	{
		sum = first_number - next_number;

		//validating for the lesser number as well as the -ve numbers
		if (sum >= limit && -sum >= limit)
		{
			printf("%d,\t", sum);
			fibonacci(next_number, sum, limit);
		}
		else
		{
			return 1;
		}

	}
}
