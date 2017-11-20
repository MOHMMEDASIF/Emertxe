/************************************************************************************************************************************************************

Title		: string match and retrurn the address 
Author		: MOHMMED ASIF.S
Date		: 14/11/2017
description	: pass two string where 1st string is actual string and 2nd string to check the pattern

 ************************************************************************************************************************************************************/

#include <stdio.h>
#include <string.h>

char *my_strstr(char *str1, int str1_len, char *str2, int str2_len);

int main()
{
	char option;

	do
	{
		char string1[40], string2[40];

		printf("Enter the string1:");
		fgets(string1, 40, stdin);

		int str1_len = strlen(string1) - 1;

		printf("Enter the string2:");
		fgets(string2, 40, stdin);

		int str2_len = strlen(string2) - 1;

		char *str_address = my_strstr(string1, str1_len, string2, str2_len);

		printf("matching String %s \n", str_address);

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
char *my_strstr(char *str1, int str1_len, char *str2, int str2_len)
{

	puts("0");
	char count = 0;
	char *track;
	int flag = 0;
	int i = str1_len - str2_len, j = str2_len;

	while( i )
	{
		if(*str1 == *str2)
		{
			track = str2;
			while (j)
			{
				if (*(track++) == *(str1++))
				{
					count++;		
					flag = 1;
				}
				else
				{
					flag = 0;
				}
				j--;
			}
			if (flag)
			{
				return (str1-count);
			}
		}
		str1++;
		i--;
	}
	return NULL;
}
