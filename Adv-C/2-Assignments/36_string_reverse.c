/************************************************************************************************************************************************************

Title		: String Reverse
Author		: MOHMMED ASIF.S
Date		: 14/11/2017
description	: Print the string in the reverse format
				Example: HELLO WORLD as DLROW OLLEH

************************************************************************************************************************************************************/

#include <stdio.h>
#include <string.h>

void reverse(char *str_ptr,int len);

int main()
{
	char option;

	do
	{
		char string[40];

		//prompt the user for the string
		printf("Enter the string:");
		__fpurge(stdin);
		fgets(string, 40, stdin);

		//get the length of the string including "\n"
		int len = strlen(string);
		
		
		reverse(string, len);
				
		printf("Entered String is [%s]", string + 1);

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

void reverse(char *str_ptr, int len)
{
	int i = 0, j = len;
	char *str_ptr1 = str_ptr;
	str_ptr = str_ptr + (len - 1);
	char temp;
		
	while (i < j)
	{
		temp = *(str_ptr);
		*(str_ptr)	= *(str_ptr1);
		*(str_ptr1)	= temp;
		str_ptr1++;
		str_ptr--;
		i++;
		j--;
	}
		
}
