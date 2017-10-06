/*
	demo code for range in switch case
*/

#include<stdio.h>

int main()
{
	char value;

	//prompt the user for the input
	printf("Enter any value from the keyboard:");
	scanf("\n%c", &value);


	//Validating for upper case lower case alphabet and digit from the input
	switch ( value )
	{
		case 'A'...'Z' :
							printf("Entered Value is Upper Case \n");
							break;
		case 'a'...'z' :
							printf("Entered Value is lower Case \n");
							break;
		case '0'...'9' :
							printf("Entered Value is digits \n");
							break;
		default :
				printf("Invalid Entry\n");
				return 1;
	}

	return 0;
}

/* non-portable code works with gcc compiler only*/
