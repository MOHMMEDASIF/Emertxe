/*
	demo code to check for arm_strong number using functions
*/

#include<stdio.h>

int is_armstrong(int num);

int main()
{
	int num, status;

	//prompt the user for number
	printf("Enter the number:");
	scanf("%d", &num);

	status = is_armstrong(num);

	if (status == num)
	{
		printf("%d is an armstrong Number", num);
	}
	else
	{
		printf("%d is not an armstrong Number", num);
	}
	return 0;
}

int is_armstrong(int num)
{
	int i, temp, pow, digit, sum = 0, count = 0;

	temp = num;
	while(temp != 0)
	{
		temp = temp / 10;
		count++;
	}

	temp = num;
	for(i = 0; i <= count; i++ )
	{
		digit = temp % 10;
		for(i = 1, pow = count; i <= count; i++)
		{
		pow = pow * digit ;
		}
		sum = sum + pow;
		temp = temp / 10;
	}
	return sum;
}
