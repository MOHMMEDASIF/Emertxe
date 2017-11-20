/************************************************************************************************************************************************************

Title		: Sort the float values in the array
Author		: MOHMMED ASIF.S
Date		: 13/11/2017
description	: Sorting values without changing the actual array and without new array

************************************************************************************************************************************************************/

#include<stdio.h>

void print_array(const float *ptr, int limit);

int main()
{
	char option;

	do
	{
		int limit, i;
	
		//prompt the user for the limit of the array
		printf("Enter the Limit for an array:");
		scanf("%d", &limit);
		
		//declare the array with limit user_entered
		float array[limit];
		
		//prompt the user for the float values of array
		puts("Enter the values of the array");
		for(i = 0; i < limit; i++)
		{
			printf("Array[%d]:", i);
			scanf("%f", array + i);
		}

		print_array(array, limit);
		
		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
void print_array(const float *ptr, int limit)
{
	float min, max, temp = 0.0;

	//initialize the min and max value with first value of the array
	min = max = *ptr;

	int i, j;
	
	//find-out the maximum number and the minimum number from the array
	for(i = 0; i < limit ; i++)
	{
		if(*(ptr + i) < min)
		{
			min = *(ptr + i);
		}
		if(*(ptr + i) > max)
		{
			max = *(ptr + i);

		}
		
	}

	//printf the min value
	printf("%f\n", min);

	//move the minimum value into the temp
	temp = max;
	float track = 0.0;

	//check for the number greater then temp and lesser then the maximum
	for(i = 0; i < limit - 2; i++)
	{	
		temp = max;	
		for(j = 0; j < limit ; j++)
		{
			if ((*(ptr + j) < temp) && (*(ptr + j) >= min))
			{
				if (*(ptr + j) > min)
				{
					temp = *(ptr + j);
					track = temp;
				}
				else if( track == (*(ptr + j)))
				{
					printf("%f\n",temp);
					j++;
				}

			}

		}
				printf("%f\n",temp);
				min = temp;
	}

	//print the maximum vlaue
	printf("%f\n", max);
}
