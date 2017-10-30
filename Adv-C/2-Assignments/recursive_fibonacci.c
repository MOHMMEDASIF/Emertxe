/************************************************************************************************************************************************************

Title		: Recursive Factorial
Author		: MOHMMED ASIF.S
Date		: 29/10/2017
description	: using main method execution of the factorial method

************************************************************************************************************************************************************/

#include<stdio.h>

int factorial(int number);

int main()
{
	char option;

	do
	{
		int number, result = 0;

		printf("Enter the NUmber:");
		scanf("%d", &number);

		if (number > 0)
		{
			result = factorial(number);

			printf("Factorial Given Number %d is %d", number, result);
		}
		else
		{
			puts("Invalid Number..");
		}

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

int factorial(int number)
{
	if (number == 0 || number == 1)
	{
		return 1;
	}
	return number * factorial(number - 1);
}
