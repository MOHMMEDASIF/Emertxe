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
		printf("Enter the value of limit:");
		scanf("%d", &number);

/*		//validate for odd or even
		if (number % 2 )
		{
			i = 1;
			j = 1;
		}
		else
		{
			i = 0;
			j = 0; 
		}
*/

		//validation for odd or even
		if(number % 2)
		{

		count = 2*number-1;

		for (i = 1 ;i <= 2 * number - 1; i++ )
		{
			for(j = 1  ;j <= 2 * number - 1; j++ )
			{
				if(i == j || count == j)
				{
					if (i == number )
					{
						printf("  Hello");
					}
					else
					{
					printf("Hello");
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

		count = 2*number-1;

		for (i = 0 ;i <= 2 * number - 1; i++ )
		{
			for(j = 0  ;j <= 2 * number - 1; j++ )
			{
				if(i == j || count == j)
				{
					printf("Hello");
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
