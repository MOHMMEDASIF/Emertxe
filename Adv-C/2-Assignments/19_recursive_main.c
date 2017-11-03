/************************************************************************************************************************************************************

Title		: Recursive Factorial
Author		: MOHMMED ASIF.S
Date		: 29/10/2017
description	: using main method execution of the factorial method

************************************************************************************************************************************************************/

#include<stdio.h>

//int factorial(int number);
int flag = 0;
int main()
{
	char option;

//	do
//	{
		int number, result = 0;
		
		if(flag == 0)
		{
			printf("Enter the NUmber:");
			scanf("%d", &number);
		}
		flag = 1;
		if (number > 0)
		{
			result = number * main(number - 1);
		}
			printf("Factorial Given Number %d is %d", number, result);

//		printf("\nDo you want to continue?[Y/N]:");
//		scanf("\n%c", &option);
//	}while (option == 'Y' || option == 'y');

	return 0;
}

#if 0
int factorial(int number)
{
	if (number == 0 || number == 1)
	{
		return 1;
	}
	return number * factorial(number - 1);
}
#endif
