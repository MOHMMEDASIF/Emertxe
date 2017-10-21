/*
   code to reverse the given number using functions
 */

#include<stdio.h>

int reverse_num(int);

int main()
{
	int num;

	//prompt the user for the number
	printf("Enter the Digit:");
	scanf("%d", & num);

	//function calling
	int reverse_number = reverse_num(num);

	printf("Reverse of the %d is %d\n", num, reverse_number);

	return 0;
}

int reverse_num(int num)
{
	int digit, reverse_number;
	while ( num != 0)
	{
		digit = num % 10;
		reverse_number = reverse_number * 10 + digit;
		num = num / 10;
	}

	return reverse_number;

}
