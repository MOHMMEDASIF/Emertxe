/************************************************************************************************************************************************************

Title		: Day Calculator
Author		: MOHMMED ASIF.S
Date		: 16/10/2017
description	: If Today day is given as input, it calculates what will the day after n-days(count) 

************************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	char option;

	do
	{
		int  user_option, count; 

		//prompt the user for the user_option
		printf("0.Sunday\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\nEnter Todays Day:");
		scanf("%d", &user_option);

		//validate teh user_option
		if (user_option >= 0 && user_option <= 6)
		{
			//prompt the user for count of the days
			printf("Enter No.of days[1-365]:");
			scanf("%d", &count);

			//validate the count
			if (count >= 1 && count <= 365)
			{

				//print the day  according to the number
				switch(	 (count + user_option) % 7 )
				{
					case 0:
						printf("After %d days, it is Sunday", count);
						break;

					case 1:
						printf("After %d days, it is Monday", count);
						break;

					case 2:
						printf("After %d days, it is Tuesday", count);
						break;

					case 3:
						printf("After %d days, it is Wednesday", count);
						break;

					case 4:
						printf("After %d days, it is Thursady", count);
						break;

					case 5:
						printf("After %d days, it is Friday", count);
						break;

					case 6:
						printf("After %d days, it is Saturday", count);
						break;

					default: 
						puts("Invalid entry");
						printf("%d\n", no );


				}

			}
			else
			{
				puts("Invalid Days Count");
			}
		}
		else
		{
			puts("Invalid Input");
		}


		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
