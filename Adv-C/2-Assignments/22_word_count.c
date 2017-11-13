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
		char temp[100];
		int count = 0;
		char ch, ch1 = ' ';
		int word_count = 0, line_count = 0, char_count = 0;

		puts("Enter the string:");
		while((ch = getchar()) != EOF )
		{
			char_count++;
			if (ch == '\n')
			{
				line_count++;
			}
			if ((ch >= '!' && ch <= '~') || (ch1 < '!' && ch1 > '~'))
			{
			 	word_count++;
			}

			ch1 = ch;
		}
		printf("\t%d\t", line_count);
		printf("%d\t", word_count);
		printf("%d\t", char_count);

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
