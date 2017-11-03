/************************************************************************************************************************************************************

Title		: To calculate average of the median numbers in two arrays
Author		: MOHMMED ASIF.S
Date		: 13/10/2017
description	: sort the array first and then carry out following operations
To get centre value of array if odd, if even calculate the average of the centre vale of array and the another as as same 
Fianlly calculate avearge of both the array	

************************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	char option;

	do
	{
		int limit1, limit2, i, j, temp;
		double avg1, avg2, final_avg;

		//prompt  the user for the limit of the fisrt array
		printf("Enter the limit of the first array:");
		scanf("%d", &limit1);

		if ( limit1 < 11 )
		{
			//declaration of the array1
			int array1[limit1];

			printf("Enter the Value of the array1\n");
			//read the content of the array
			for(i = 0; i < limit1; i++)
			{
				printf("array1[%d]:",i);
				scanf("%d", &array1[i]);

			}

			//sorting the array in ascending order
			for(i = 0;i < limit1 - 1; i++)
			{
				for(j = i + 1; j < limit1; j++)
				{
					if (array1[i] > array1[j])
					{
						temp = array1[j];
						array1[j] = array1[i];
						array1[i] = temp;
					}
				}
			}

			if((limit1 - 1) % 2)
			{
				avg1 = (double) (array1[(sizeof(array1) / sizeof(array1[0])) / 2] + array1[(sizeof(array1) / sizeof(array1[0])) / 2 - 1]) / 2;
			}
			else
			{
				avg1 = (double)array1[sizeof(array1) / sizeof(array1[0]) / 2];

			}

		}
		else
		{
			puts("");
			puts("Array Limit should be less than 10");
			return 1;
		}

		/*
		//printing the array for correctness check
		printf("after sorting");
		for(i = 0; i < limit1; i++)
		{
		printf("%d", array1[i]);

		}
		 */

		//prompt  the user for the limit of the Second array
		printf("Enter the limit of the Second array:");
		scanf("%d", &limit2);

		if(limit2 < 11)
		{
			//declaration of the array2
			int array2[limit2];

			printf("Enter the Value of the array2\n");
			//read the content of the array2
			for(i = 0; i < limit2; i++)
			{
				printf("array2[%d]:", i);
				scanf("%d", &array2[i]);

			}

			//sorting the array in ascending order
			for(i = 0;i < limit2 - 1; i++)
			{
				for(j = i + 1; j < limit2; j++)
				{
					if (array2[i] > array2[j])
					{
						temp = array2[j];
						array2[j] = array2[i];
						array2[i] = temp;
					}
				}
			}

			//find the average of 2 numbers if its even else retuen the centre value as the median
			if((limit2 - 1) % 2)
			{
				avg2 = (double) (array2[(sizeof(array2) / sizeof(array2[0])) / 2] + array2[(sizeof(array2) / sizeof(array2[0])) / 2 - 1]) / 2;
			}
			else
			{
				avg2 = (double)array2[sizeof(array2) / sizeof(array2[0]) / 2];

			}
		}
		else
		{
			puts("");
			puts("Maximum limit of an array should be 10");
			return 1;
		}

		final_avg = avg1 + avg2 / 2 ; 

		printf("Final Median is %lf", final_avg);


		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
