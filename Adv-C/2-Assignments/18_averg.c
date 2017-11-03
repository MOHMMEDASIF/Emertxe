/************************************************************************************************************************************************************

Title		: To find the average of n-numbers by taking input in 3 different ways
Author		: MOHMMED ASIF.S
Date		: 31/10/2017
description	:     Ist method
					Read number n from user.
					Read n numbers from user.
					Calculate average of entered numbers and print it on the screen.
				  IInd method
					Pass the numbers (for which average to be calculated) through command line.
					Collect them in main
					Calculate the average of them.
					Hint : Use atoi function to convert string to integers.
				  IIIrd method
					Pass the numbers (for which average to be calculated) through environment variables.
					Collect them in main
					Calculate the average of them.
					Hint :
					Use atoi function to convert string to integers.
					Use strtok to split the strings.

					Example : From shell export a variable which contain numbers.
					export arr=”1 2 3 4″

					In main program receive this by third argument of main. Extract numbers from string and calculate their average.

************************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	char option;

	do
	{

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
