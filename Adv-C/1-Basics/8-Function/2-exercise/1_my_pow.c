/*
	Demo code to execute the x pow y using function
*/

#include<stdio.h>

int my_pow(int, int);

int main()
{
	int x, y, power_value;

	//prompt the user for the x value
	printf("Enter the value of X:");
	scanf("%d", &x);

	//prompt the user for the y value
	printf("Enter the value of Y:");
	scanf("%d", &y);

	power_value = my_pow(x, y);

	printf("%d to the power of %d is %d\n", x, y, power_value);

	return 0;
}

int my_pow(int x, int y)
{
	int i, pow;

	for(i = 1, pow = x; i < y; i++)
	{
		pow = pow * x;
		
	}

	return pow;

}
