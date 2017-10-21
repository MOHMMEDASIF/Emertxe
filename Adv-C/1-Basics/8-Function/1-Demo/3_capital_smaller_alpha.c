/*
	code for capital and smaller alphabet
*/

#include<stdio.h>
#define UPPER 1
#define LOWER 0

int is_lower_upper(char);

int main()
{
	char alpha;

	//prompt the user for the input
	printf("Enter the character:");
	scanf("%c", &alpha);

	int status = is_lower_upper(alpha);

	if (UPPER == status)
	{
		printf("%c is in Capital letter\n", alpha);
	}
	else
	{
		printf("%c is an lower letter\n", alpha);
	}

	return 0;
}

int is_lower_upper(char alpha)
{

	return (alpha >= 'A' && alpha <= 'Z')? UPPER : LOWER;
}
