/************************************************************************************************************************************************************

Title		: To print the ascii-tabular column with octal,hexadecimal,deciaml values of respected ascii charcater
Author		: MOHMMED ASIF.S
Date		: 4/10/2017
description	: Print all the print able ascii character using for loop

 ***********************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	int starting;

	//heading for the octal hexa decimal and respective ascii character
	printf("\n[Octal]\t[decimal]\t[hexadecimal]\t[ascii]\n");

	//prints the printable ascii character fom the 33 to 126 range and its respective octal hexadecimal nd decimal values
	for (starting = 33; starting <=126 ; starting++ )
	{
		printf("  %o\t  %d\t\t  %X\t\t  %c\n", starting,	starting, starting, starting);

	}

	return 0;
}
