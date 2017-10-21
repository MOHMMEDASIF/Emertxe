/*
   Demo code for the Palindrome
 */

#include <stdio.h>
#define VALID			 0
#define INVALID			-1
#define PALINDROME		 1
#define NOT_PALINDROME	-2

int isvalid(int);
int reverse_number(int);
int ispalindrome(int);

int main()
{
	int num, status;

	//prompt the user for the Number
	printf("Enter the Number:");
	scanf("%d", &num);

	//validate the number
	status = isvalid(num);

	//print appropriate message if invalid
	if (status == INVALID)
	{
		printf("INVALID NUMBER\n");
		return -1;

	}

	//validate for the palindrome
	status = ispalindrome(num);

	//print appropriate message if Pallindrome
	(status == PALINDROME)?printf("%d is an Palindrome\n", num):printf("%d is an not a Palindrome\n", num);


	return 0;
}

int isvalid(int num)
{
	return (num >= 100 && num <= 999)?VALID:INVALID;
}

int ispalindrome(int num)
{
	int status, temp = num;

	status = reverse_number(temp);

	return (status == num)?PALINDROME:NOT_PALINDROME;
}

int reverse_number(int num)
{
	int sum = 0, i, digit;

	while( num != 0 )
	{
		digit = num % 10;
		sum = sum * 10 + digit;
		num = num /10 ;

	}

	return sum;
}
