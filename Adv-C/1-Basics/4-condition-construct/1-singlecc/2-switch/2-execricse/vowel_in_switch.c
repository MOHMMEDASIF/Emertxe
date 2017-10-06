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
		
	case 'a' : 
				printf("vowels\n");
				break;
	case 'e' : 
				printf("vowels\n");
				break;
	case 'i' : 
				printf("vowels\n");
				break;
	case 'o' : 
				printf("vowels\n");
				break;
	case 'u' : 
				printf("vowels\n");
				break;
	case 'A' : 
				printf("vowels\n");
				break;
	case 'E' : 
				printf("vowels\n");
				break;
	case 'I' : 
				printf("vowels\n");
				break;
	case 'O' : 
				printf("vowels\n");
				break;
	case 'U' : 
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
