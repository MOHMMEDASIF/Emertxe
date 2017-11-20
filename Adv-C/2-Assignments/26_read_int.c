/************************************************************************************************************************************************************

Title		: Read int using char datatype
Author		: MOHMMED ASIF.S
Date		: 12/11/2017
description	: Read the character from the user using getchar and put in one variable to dispaly in form of int

************************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	char option;

	do
	{

		char ch_digit;
		int result = 0, flag = 0;
		
		//prompt the user for the character
		printf("Enter the charcters to convert into integers:");

		//get the input from the user untill new-line character
		while((ch_digit = getchar()) != '\n')
		{
			if(ch_digit == '-')
			{
				//rise the flag if the given character has '-'
				flag = 1;
			}
			else if(ch_digit < '0' || ch_digit > '9')
			{
				break;
			}
			else if (ch_digit >= '0' && ch_digit <= '9')
			{
				//convert the character into integers;
				ch_digit = ch_digit - 48;

				//add the digits to get an number and store back in result
				result = result * 10 + ch_digit;
			}
			
		}
		
		//print -negative number if flag is rised
		if(flag)
		{
			printf("Entered Digit is:%d", (result * (-1)));
		}
		else
		{
			printf("Entered Digit is:%d", result);
		}

		printf("\nDo you want to continue?[Y/N]:");
		//__fpurge(stdin);
		scanf(" %c", &option);
		getchar();
	}while (option == 'Y' || option == 'y');

	return 0;
}
