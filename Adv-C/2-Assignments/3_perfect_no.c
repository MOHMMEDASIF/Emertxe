/************************************************************************************************************************************************************

Title		: To check whether the given number is perfect number or not
Author		: MOHMMED ASIF.S
Date		: 5/10/2017
description	:     In number theory, a perfect number is a positive integer that is equal to the sum of its proper positive divisors, that is, the sum of its positive divisors excluding the number itself (also known as its aliquot sum).
Equivalently, a perfect number is a number that is half the sum of all of its positive divisors (including itself).

Example:

The first perfect number is 6, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 = 6. Equivalently, the number 6 is equal to half the sum of all its positive divisors: ( 1 + 2 + 3 + 6 ) / 2 = 6
The next perfect number is 28 = 1 + 2 + 4 + 7 + 14. This is followed by the perfect numbers 496 and 8128

 ************************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	int value,i,sum=0;

	//prompt the user for the input value
	printf("Enter the Number to check:");
	scanf("%d", &value);

	if ( value > 0)
	{
		//calculates all the number that are divider of value
		for (i = 1; i <= value/2; i++)
		{
			if (value % i == 0)
			{
				sum = sum + i;
			}
		}

		//Print perfect number if the value is equal to the sum of divider values 
		if (sum == value)
		{
			printf("%d: is an Perfect Number\n", value);
		}
		else
		{
			printf("%d: is not an perfect Number\n", value);
		}
	}
	else
	{
		printf("[ERROR] Invalid Number [ERROR]\n");
	}

	return 0;
}
