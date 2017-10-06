/*
	demo code that reads the floating point number and prints them in terminal
*/

#include<stdio.h>

int main()
{
	float f;

	//prompt the user for the float number
	printf("Enter the value of Float:");

	//read the user-data
	scanf("%f", &f);

	//print the the value of the f
	printf("The value of f is %f\n", f);
	
	return 0;

}
