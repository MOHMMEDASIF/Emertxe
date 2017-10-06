/************************************************************************************************************************************************************

Title		: To check whether the given number is perfect number or not
Author		: MOHMMED ASIF.S
Date		: 5/10/2017
description	: if the given number is equal to sum of all the number divisble by the same number is called as perfect number
example ( input: 6 then 6 should be equal to 1+2+3 [numbers that are divider of 6] , output: Its is an perfect number )

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
