/************************************************************************************************************************************************************

Title		: To check whether the number is even or odd using bitwise operator
Author		: MOHMMED ASIF.S
Date		: 13/10/2017
description	: Checking the last bit using &operator will give back the last bit value and can be validate using ternary operator

 ************************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	char option;

	do
	{
		int number;
		unsigned first_bit;

		//prompt the user for the input Value
		printf("Enter the Number:");
		scanf("%i", &number);

		//logic to print odd or even using bitwise operator
		first_bit = (number & ( ~ ( ~ 0 << 1)));

		//Ternary operator to print if first_bit is 1 then odd else even
		(first_bit) ? printf("%d is an ODD number", number) : printf("%d is an Even Number", number);

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
