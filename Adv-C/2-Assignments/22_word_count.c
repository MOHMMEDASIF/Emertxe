/************************************************************************************************************************************************************

Title		: word count 
Author		: MOHMMED ASIF.S
Date		: 3/11/2017
description	: word count should return the no.of lines, words, characters(should work like wc commend)

************************************************************************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char option;

	do
	{
		char string[100], i, temp;
		char ch_ptr;
		int string_length;
		int word_count = 0, line_count = 0, char_count = 0;

		puts("Enter the string:");
		for(i = 0;  ; i++)
		{
			scanf("%c", &temp);
			*(string + i) = '\0';
			if (temp != EOF )
		//	{
		//		break;
		//	}
		//	else
			{
				*(string + i) = temp;
			}
		}

		string_length = strlen(string);
		printf("%s\t", string);
		printf("%d\n", string_length);

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
