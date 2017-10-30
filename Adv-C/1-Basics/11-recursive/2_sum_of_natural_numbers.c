/*
	Demo code to impliment recursive function
*/

#include <stdio.h>

int main()
{
	int number;

	printf("Enter the Number:");
	scanf("%d", &number);

	int res = fact(number);

	printf("Result: %d\n", res);
}

int fact(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}

	return n + fact(n - 1);
}
