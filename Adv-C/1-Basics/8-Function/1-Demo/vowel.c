/*
	Demo code to check for vowels
*/

#include <stdio.h>
#define VALID		 1
#define INVALID		-1
#define VOWEL		 2
#define NOT_VOWEL	-2

int isvalid(char);
int isvowel(char);

int main()
{
	char alpha;
	int status;

	//prompt the user for the alphabet
	printf("Enter the Alphabet:");
	scanf("\n%c", &alpha);

	status = isvalid(alpha);

	if (status == INVALID)
	{
		puts("INVALID INPUT....\n");
		return -1;
	}

	status = isvowel(alpha);
	
	if (status == VOWEL)
	{
		printf("%c is vowel\n", alpha);
	}
	else
	{
		printf("%c is not vowel\n", alpha);
	}

	return 0;
}

int isvalid(char alpha)
{
	return ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z') ? VALID : INVALID);
}

int isvowel(char alpha)
{
	switch (alpha)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
				return VOWEL;
				break;
		default :
				return NOT_VOWEL;
				break;
	}

}
