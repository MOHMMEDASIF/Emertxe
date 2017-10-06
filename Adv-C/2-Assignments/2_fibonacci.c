/************************************************************************************************************************************************************

Title		: fibonacci ( +ve and -ve numbers)
Author		: MOHMMED ASIF.S
Date		: 5/10/2017
description	: prints all the fibonacci series of the given number

 ***********************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	char option;
	int i, number, bprev, prev, sum ;

	do
	{
		//prompt the user for the number
		printf("Enter the Number to find fibonacci series:");
		scanf("%d", &number);

		//validate the positive and negative number
		if (number > 0 )
		{
			//initialize the previous values values
			bprev = 0;
			prev = 1;
			printf("0\n");

			//calculate the sum of previous two numbers and print if they are less then input
			for (i = 2; i < number; i++  )
			{
				sum = bprev + prev;

				if( sum <= number)
				{
					printf("%d\n", sum);
				}
				else
				{
					break;
				}

				bprev = prev;
				prev = sum;

			}
		}
		else
		{
			//initialize the previous value
			bprev = 0;
			prev = 1;
			printf("0\n");
			printf("1\n");

			//calculate the sum of previous two numbers and print if they are less then input
			for (i = 2; i > number; i++  )
			{
				sum = bprev - prev;

				if ( sum > number )
				{
					if( sum >= -1 * number)
					{
						break;
					}
					printf("%d\n", sum);
				}
				else if (sum == number || sum == -1 * number)
				{
					printf("%d\n", sum);
					break;
				}
				else
				{
					break;
				}

				bprev = prev;
				prev = sum;

			}

		}

		//prompt the user to continue or to exit
		printf("\nDo you want to continue?[Y/N]");
		scanf("\n%c", &option);

	}while (option == 'Y' || option == 'y');

	return 0;
}
