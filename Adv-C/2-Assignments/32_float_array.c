/************************************************************************************************************************************************************

Title		: Sort the float values in the array
Author		: MOHMMED ASIF.S
Date		: 13/11/2017
description	: Sorting values without changing the actual array and without new array

************************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	char option;

	do
	{
		int limit, i;
	
		//prompt the user for the limit of the array
		printf("Enter the Limit for an array:");
		scanf("%d", limit);
		
		//declare the array with limit user_entered
		float array[limit];
		
		//prompt the user for the float values of array
		puts("Enter the values of the array");
		for(i = 0; i < limit; i++)
		{
			printf("Array[%d]", i);
			scanf("%f", array + i);
		}

		
		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
