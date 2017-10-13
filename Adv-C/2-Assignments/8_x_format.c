/************************************************************************************************************************************************************

Title		: Print the string in the X-format
Author		: MOHMMED ASIF.S
Date		: 5/10/2017
description	: print the "Hello" in the x-format

************************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	char option;

	do
	{ 

		int number, i, j, count = 0;

		//prompt the user for the number
		printf("Enter the value of limit:");
		scanf("%d", &number);

		//validation even or odd
		//code for the odd
		if(number % 2)
		{

		count = number ;

		for (i = 1  ;i <= number; i++ )
		{
			for(j = 1  ;j <= number; j++)
			{
				if(i == j || j == count)
				{
					if (i == number / 2 + 1)
					{
						printf("  HELLO");
					}
					else
					{
						printf("HELLO");
					}

				}
				else
				{
					printf(" ");
				}
			}
			count--;
			printf("\n");
		}
		}

		//code for even
		else
		{
		count = number ;

		for (i = 1  ;i <= number; i++ )
		{
			for(j = 1  ;j <= number; j++)
			{
				if(i == j || j == count)
				{
					if (i == number / 2 || i == number / 2 + 1)
					{
						printf("  HELLO");
						break;

					}
					else
					{
						printf("HELLO");
					}

				}
				else
				{
					printf(" ");
				}
			}
			
			count--;
			printf("\n");

		}

		}

				

		printf("Do you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
