/*
	Demo code for Switch condition
*/

#include<stdio.h>

int main()
{
	int option; 

	//prompt the user to enter the number b/w 1-3
	printf("Enter the Option 2 or 4:");
	scanf("%d", &option);


	//validated the user input for the option
	switch ( option + 2 )
	{

		case 4 : 
				printf("You have Entered Number 4\n");
				break;
		case 6 :
				printf("you have Entered number 6\n");
				break;
/*		case 3 :
				printf("you have Entered number 3\n");
				break;
				*/

		default :
				printf("Invalid Input\n");
				break;
			
	}

	return 0;
}
