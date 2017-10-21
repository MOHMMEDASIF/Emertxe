/*
   Demo code for the prime number using functio
 */

#include <stdio.h>
#define VALID		 0
#define INVALID		-1
#define PRIME		 1
#define NOT_PRIME	-2

int isvalid(int, int);
void printprime(int, int);

int main()
{
	int lower, upper, status;

	//prompt the user for the lower number
	printf("Enter the starting Number:");
	scanf("%d", &lower);

	//prompt the user for the last number
	printf("Enter the End Number:");
	scanf("%d", &upper);

	status = isvalid(lower, upper);

	if (status == INVALID)
	{
		printf("INVALID NUMBER");
		return -1;
	}

	printprime(lower, upper);

	puts("");

	return 0;
}

int isvalid(int lower, int upper)
{
	return (lower >= 100 && upper <= 999)?VALID:INVALID;
}

void printprime(int lower, int upper)
{
	int i, num, status;

	for(num = lower; num <= upper; num++)
	{
		status = isprime(num);

		if(status == PRIME)
		{
			printf(" %d", num );
		}

	}
}

int isprime(int num)
{
	int i;

	for(i = 2; i < num / 2; i++)
	{
		if ( num % i == 0)
		{

			return NOT_PRIME;
		}
	}

	return PRIME;
}
