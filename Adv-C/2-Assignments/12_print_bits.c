/************************************************************************************************************************************************************

Title		: Print the bits of the input Value
Author		: MOHMMED ASIF.S
Date		: 21/10/2017
description	: The value in the bits should be printed

************************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	char option;

	do
	{
		//declaration of the variables
		int user_number; 
		unsigned int mask;

		//prompt the user for the number
		printf("Enter The Number:");
		scanf("%d", &user_number);

		//print the bits using the mask
		for(mask = 1 << ((sizeof(user_number) << 3) - 1); mask ; mask >>=  1)
		{
			(user_number & mask)?putchar('1'):putchar('0');
		}




		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
