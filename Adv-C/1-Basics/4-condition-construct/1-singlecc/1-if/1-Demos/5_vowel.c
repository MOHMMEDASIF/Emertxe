/*
	To check for vowel 
*/

#include<stdio.h>

int main()
{
	//declare the character variable
	char ch;
	
	//prompt the user for the char 
	printf("Enter the Character:");
	scanf("%c", &ch);

	//validate the character for the vowels
	if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'  ))
	{
		if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			printf("%c:is an vowel\n", ch);
		}
		else
		{
			printf("%c:is an Alphabet but not an Vowel\n", ch);
		}
	}
	else
	{
		printf("%c:is not an Alphabet\n", ch);
	}

	return 0;
}
