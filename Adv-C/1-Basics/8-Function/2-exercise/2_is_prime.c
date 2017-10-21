/*
	Demo code to check whether the number is prime or not using function
*/

#include<stdio.h>
#define PRIME 1
#define NOT_PRIME 0

int is_prime(int);

int main()
{
	int num;

	//prompt the user for an number
	printf("Enter the Number:");
	scanf("%d", &num);

	//function calling
	int status = is_prime(num);

	//validate for the prime
	if (status == PRIME)
	{
		printf("%d is an prime Number\n", num);
	}
	else
	{
		printf("%d is not a prime number\n", num);
	}

	return 0;
}

int is_prime(int num)
{
	//initailizing status to prime
	int i, status = PRIME;

	//dividing each value with given number 
	for (i = 2; i < num; i++)
	{
		/*** if the number is divided and return the value zero then its is not an prime number 
				hence break takes place where status is re-initialized to NOT_PRIME  *********/
		if(num % i == 0)
		{
			status = NOT_PRIME;
			break;
		}

	}

	return status;
}
