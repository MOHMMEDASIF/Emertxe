/************************************************************************************************************************************************************

Title		: C-Type library function 
Author		: MOHMMED ASIF.S
Date		: 11/11/2017
Description	:
			  C-type library functions check whether c, which must have the value of an unsigned char or EOF, falls into a certain character class according               to the current locale.
				isalnum() – checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
				isalpha() – checks for an alphabetic character; in the standard “C” locale, it is equivalent to (isupper(c) || islower(c)). 
							In some locales, there may be additional characters for which isalpha() is true—letters 
							which are neither upper case nor lower case.
				isascii() – checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
				isblank() – checks for a blank character; that is, a space or a tab.

************************************************************************************************************************************************************/

#include <stdio.h>
#define NUM		1
#define ALPHA	2
#define ASCII	3
#define BLANK	4

//functions prototype
int my_isalnum(char character);
int my_isalpha(char character);
int my_isascii(char character);
int my_isblank(char character);

int main()
{
	char option;

	do
	{
		//declaration of function
		char character;
		int user_option, status;
		
		//get the character from the user
		printf("Enter the Character:");

		//buit-in function to flush the stdin buffer
		//__fpurge(stdin);

		//fgets(character,1,stdin);//
		character = getc(stdin);
		
		//prompt the user for the option 
		printf("Choice Below Option\n");
		printf("1.isalnum\n2.isalpha\n3.isascii\n4.isblank\n");
		printf("Enter your Option:");
		scanf("%d", &user_option);

		//validation of the user_option
		switch(user_option)
		{
			case 1:
					status = my_isalnum(character);
					if(status == NUM)
					{
						printf("Character '%c' is an number", character);
					}
					else
					{
						printf("Character '%c' is not a number", character);
					}
					break;

			case 2:
					status = my_isalpha(character);
					if(status == ALPHA)
					{
						printf("Character '%c' is an Alphabet", character);
					}
					else
					{
						printf("Character '%c' is not an Alphabet", character);
					}
					break;

			case 3:
					status = my_isascii(character);
					if(status == ASCII)
					{
						printf("Character '%c' is an ascii", character);
					}
					else
					{
						printf("Character '%c' is not an ascii", character);
					}
					break;

			case 4:
					status = my_isblank(character);
					if(status == BLANK)
					{
						printf("Character '%c' is an blank", character);
					}
					else
					{
						printf("Character '%c' is not blank", character);
					}
					break;

			default:
					puts("Invalid Choice.....");
		}

		printf("\nDo you want to continue?[Y/N]:");
		scanf(" %c", &option);
		getchar();
	}while (option == 'Y' || option == 'y');
	//fflush(stdin);
	//fflush(stdout);
	return 0;
}

//Function chaecks for the Number
int my_isalnum(char character)
{
	return (character >= '0' && character <= '9')?  NUM : -1;
}

//functionn checks for the alphabets
int my_isalpha(char character)
{
	return (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') ? ALPHA: -1;

}

//function checks for the ascii
int my_isascii(char character)
{
	return (character >= 0 && character <= 127)? ASCII: -1;
}

//function checks for the blank
int my_isblank(char character)
{
	return (character == ' ' || character == '\t')?  BLANK:-1; 
}
