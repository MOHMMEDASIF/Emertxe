/*
	demo code that reads the double number and prints them in terminal
*/

#include<stdio.h>

int main()
{
	long double f;

	//prompt the user for the double number
	printf("Enter the value of double:");

	//read the user-data
	scanf("%LF", &f);

	//print the the value of the f
	printf("The value of f is %LF\n", f);
	
	return 0;

}
