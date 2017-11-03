/************************************************************************************************************************************************************

Title		: Pre and Post increment using pointers
Author		: MOHMMED ASIF.S
Date		: 31/10/2017
description	: Two function to post and pre increment and the function should return the exact values back and print the values in the terminal

************************************************************************************************************************************************************/

#include<stdio.h>

int pre_increment(int *number);
int post_increment(int *number);

int main()
{
	char option;

	do
	{
		int number, user_choice, i;

		//prompt the user for the number
		printf("Enter the Number:");
		scanf("%d", &number);

		//prompt the user for the user_choice
		printf("Enter The operation\n 1.Pre-increment\n 2.Post-increment\nEnter Your Choice:");
		scanf("%d", &user_choice);

		//validate the user_choice
		switch(user_choice)
		{
			case 1:
					i = pre_increment(&number);
					printf(" i = %d\n number = %d\n", i, number);
					break;
			case 2:
					
					i = post_increment(&number);
					printf(" i = %d\n number = %d\n", i, number);
					break;
		
			default: puts("Invalid Entry....");
		}

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

//function goes to location, increments the actual value by 1 and returns the value to the main function
int pre_increment(int *number)
{
	return ++*number;
}

//function returns the value present it that particular location and then increments the value by 1
int post_increment(int *number)
{
	return (*number)++;
}
