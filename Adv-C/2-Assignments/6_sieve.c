/************************************************************************************************************************************************************

Title		: Printing All prime numbers using array
Author		: MOHMMED ASIF.S
Date		: 16/10/2017
description	: Initializing the array with zero. checking all the divisible index  and re-initializing then with X and finally printing only index whose 
			  index is zero.

			  Example:	a[11] = a[2] a[3] a[4] a[5] a[6] a[7] a[8] a[9] a[10]
								  0    0     x    0    x    0    x    x    x      //hence 2,3,5,7 are prime numbers
 **********************************************************************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
	char option;

	do
	{
		//declaration of the variables
		int limit, i, j;

		//prompt the user for the limit
		printf("Enter the value of n:");
		scanf("%d", &limit);

		//validating for positive number
		if (limit > 1)
		{
			//initializing the array with limit
			int array[limit];

			//initialize array values with 0
			for(i = 0; i < limit; i++)
			{
				array[i] = 0;
			}

			//re-initialize all the value if the index is divisible by other index value
			for (i = 2; i <= limit; i++)
			{
				for (j = 2; j<= limit; j++ )
				{
					if ((j % i == 0) && i != j)
					{
						array[j] = 'x';
					}
				}

			}

			printf("Prime Numbers less Then are equal to %d are:", limit);
			
			//prints all the index if the value is 0 
			for (i = 2; i <= limit; i++)
			{
				if (array[i] == 0)
				{
					printf("  %d", i);
				}

			}

		}
		else
		{
			puts("Invalid Input");
		}

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
