/************************************************************************************************************************************************************

Title		: Remove multiple space in the given string
Author		: MOHMMED ASIF.S
Date		: 5/11/2017
Description	: replace n-space by one space between thw words
************************************************************************************************************************************************************/

#include <stdio.h>
#include <string.h>


int main()
{
	char string[30];

	//prompt the user for string
	printf("Enter The string with blank spaces:");
	fgets(string, 30, stdin);
	
	//declare the variables to track the space
	char i;
	int string_length = strlen(string) - 1;
	char *temp = string;
	char *track = string;
	int string_count = 0;

	//print the actual input string
	printf("The input string is :%s\n", string);

	//perform the operation by tracking the temp and track value for space if both are spae then put *(temp + i) in string
	for(i = 0; i < string_length; i++)
	{
		if ( *(temp + i) == ' ' && *(track + i + 1) == ' ' )
		{

		}
		else
		{
			string[string_count] = *(temp + i);
			string_count++;
		}
		
	}

	//put last value as null character to print as string 
	string[string_count] = '\0';

	//print the string with 1 space in-between word
	printf("\nAfter space delete The input string is :%s\n", string);
}
