/*
	Demo code for Switch condition
*/

#include<stdio.h>

int main()
{
	int option; 

	//prompt the user to enter the number b/w 1-3
	printf("Enter the Option b/w 1 to 3:");
	scanf("%d", &option);


	//validated the user input for the option
	switch ( option )
	{

		case 1 : 
				printf("You have Entered Number 1\n");
				break;
		case 1 :
				printf("you have Entered number 2\n");
				break;
		case 3 :
				printf("you have Entered number 3\n");
				break;

		default :
				printf("Invalid Input\n");
				break;
			
	}

	return 0;
}
