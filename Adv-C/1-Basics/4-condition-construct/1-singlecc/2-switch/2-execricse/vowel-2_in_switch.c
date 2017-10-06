/*
	Demo code for vowel in switch case
*/

#include<stdio.h>

int main()
{
	char value;

	//prompt the user for the value 
	printf("Enter the alphabet:");
	scanf("\n%c", &value);

	//validate for the alphabet
	if((value >= 'A' && value <= 'Z') || (value >= 'a' && value <= 'z'))
	{

	//validate for vowels
	switch ( value )
	{
		
	case 'A' : 
	case 'E' : 
	case 'I' : 
	case 'O' : 
	case 'U' : 
	case 'a' : 
	case 'e' : 
	case 'i' : 
	case 'o' : 
	case 'u' : 
				printf("vowels\n");
				break;


	default :
				printf("Alphabet but not an vowel\n");
				break;

	}



	}
	else
	{
		printf("Invalid Input");

	}
}
