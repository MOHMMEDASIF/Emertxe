/***********************************************************************************************************************************************************

Title		: Squeeze the characters in the first string
Author		: MOHMMED ASIF.S
Date		: 14/11/2017
description	: read 2 strings. from the second string if the charcter is matching in first word then replace 
				Example: string1: www.google.com
						 string2: go
						 output : www.le.cm

************************************************************************************************************************************************************/

#include<stdio.h>

void squeeze(char *str1, char *str2);

int main()
{
	char option;

	do
	{
		char string1[40], string2[40]; 

		printf("Enter the string1:");
		scanf("%s", string1);


		printf("Enter the string2:");
		scanf("%s", string2);

		squeeze(string1, string2);

		printf("Squeeze string is %s", string1);

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

void squeeze(char *str1, char *str2)
{
	int i, j, k;
	for (i = 0; *(str1 + i); i++)
	{
		for(j = 0; *(str2 + j); j++ )
		{
			if(*(str1 + i) == *(str2 + j))
			{
				for (k = i + 1; *(str1 + k); k++)
				{
					*(str1 + i) = *(str1 + k); 
				}
			}
	
		}		
	}
}
