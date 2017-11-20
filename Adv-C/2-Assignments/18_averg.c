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

float avg_cal(int *p, int limit);

int main(int argc, char *argv[])
{
	char option;

	do
	{
		int limit, i;
		
		//prompt the user for the limit
		printf("Enter the limit of an array:");
		scanf("%d", &limit);
		
		int array[limit];

		//prompt the user for the array value
		printf("Enter the Array values:\n");
		for(i = 0; i < limit; i++)
		{
			printf("a[%d]:",i);
			scanf("%d", array + i);

		}

		//function calling to the calculate the average
		float average = avg_cal(array, limit);

		//print the avearge value in the terminal
		printf("\nAverage of given number is: %f\n", average / limit);

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

float avg_cal(int *p, int limit)
{
	//decalaration of the variables
	int i;
	float avg;

	for(i = 0; i < limit; i++)
	{
		avg = avg + (*(p + i));
	}

	return avg;
}
