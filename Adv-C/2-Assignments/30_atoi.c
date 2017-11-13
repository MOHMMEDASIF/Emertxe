/************************************************************************************************************************************************************

Title		: Convert the integer value to character and vice versa 
Author		: MOHMMED ASIF.S
Date		: 12/11/2017
description	: Converting the given string into integer and integer into character like a built-in function atoi and itoa

 ************************************************************************************************************************************************************/

#include<stdio.h>

int my_getword(char *word);
int my_atoi(const char *s);
int my_itoa(int n, char *word);

int main()
{
	char option;

	do
	{
		int word_length = 0;
		int i, user_option, number;
		char string[40] = {0};

		printf("Pick the Function to Execute:");
		printf("\n1.getword\n2.atoi\n3.itoa\nPlease Enter Your choice:");
		scanf("%d", &user_option);

		switch(user_option)
		{
			case 1:
				//prompt the user for the string
				printf("Enter the Word:");
				__fpurge(stdin);
				//store the strig in the variable called string
				fgets(string, 40, stdin);

				//call the function to calculate the length of the string
				word_length = my_getword(string);

				//print the Entered word in the terminal 
				printf("You Entered [");
				for(i = 0; i < word_length; i++)
				{
					printf("%c", string[i]);
				}
				printf("]\n");

				break;

			case 2:
				//prompt the user for the string in numberic format
				printf("Enter the Numberic String:");
				__fpurge(stdin);

				//store the number in string variable
				fgets(string, 40, stdin);

				int value = my_atoi(string);

				printf("Entered Number is [%d]\n", value);
				break;
			case 3:
				//prompt the user for the integer number
				printf("Enter the Digits:");
				scanf("%d", &number);

				int string_length;

				if (number > 0)
				{
					string_length = my_itoa(number, string);
					for(i = string_length; i >= 0; i--)
					{
						printf("%c", string[i]);
					}
				}
				else if (number < 0)
				{
					string_length = my_itoa((number * ( - 1)), string);
					printf("-");
					for(i = string_length; i >= 0; i--)
					{
						printf("%c", string[i]);
					}
				}
				else
				{
					printf("Invalid Entry.....");
				}
		}


		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

//function checks for the space and returns the count else runs till the null character
int my_getword(char *word)
{
	int count = 0;

	//validate till null character
	while(*word != '\0')
	{
		//increment the count till space
		if ((*word) == ' ') 
		{
			break;
		}
		else 
		{
			count++;
			word++;
		}
	}
	return count;
}

//function returns the integers value to respected numeric string value
int my_atoi(const char *s)
{
	int result = 0;
	int flag = 0;
	while (*s != '\0')
	{
		if(*s <= '0' && *s >= '9')
		{
			break;
		}
		else if(*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - 48);
			printf("%d", (*s-48));
			s++;
		}
		else if(*s == '-')
		{
			flag = 1;
			s++;
		}
		else
		{
			s++;
		}

	}


	return (flag) ? (result * ( - 1)) : result;
}

//function returns the total count of the digit
int my_itoa(int number, char *word)
{
	int count = 0;
	int digit = 0;
	while (number != 0)
	{
		count ++;
		digit = number % 10;
		*word = (((char)digit) + 48);
		word++;
		number = number / 10;
	}

	return count;
}
