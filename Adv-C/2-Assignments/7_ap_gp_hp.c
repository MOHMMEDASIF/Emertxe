/************************************************************************************************************************************************************

Title		: A.P & G.P & H.P
Author		: MOHMMED ASIF.S
Date		: 10/10/2017
description	: Calculating and printing the ap,gp,hp series without array

 ***********************************************************************************************************************************************************/

#include<stdio.h>

int main()
{
	char option;

	do
	{
		//declaaration of the variable
		int i, count, choice, first_num, difference, ratio, max_limit, a_p, g_p;
		double h_p;
		
		//prompt teh user for the option
		puts("1.Arithematic Progression");
		puts("2.geometric Progression");
		puts("3.Harmonic progression");
		puts("Enter Your option:");
		scanf("%d", &choice);
	
		//validating the choice
		switch (choice)
		{
			case 1:
				//prompt the user for the first_number
				printf("Enter The First Number:");
				scanf("%d", &first_num);

				//validate for the first_number
				if (first_num > 0)
				{
					//prompt for difference
					printf("Enter the Common Difference:");
					scanf("%d", &difference);

					//validate for th difference
					if( difference > 0)
					{
						//prompt the user for the maximum value
						printf("Enter the Maximum value to be print:");
						scanf("%d", &max_limit);

						//validate the max_limit 
						if(max_limit > first_num)
						{
							printf("A.p Series:");

							//logic to printf a.p
							for ( i = first_num ; i <= max_limit; i = i + difference )
							{
								printf("  %d", i);
							}

						}
						else
						{
							puts("Maximum value should be greater then first number");
						}

					}
					else
					{
						puts("Invalid Common difference");
					}

				}
				else
				{
					puts("Invalid first number");
				}
				break;
			case 2:

				printf("Enter The First Number:");
				scanf("%d", &first_num);
				if (first_num > 0)
				{
					printf("Enter the Common Ratio:");
					scanf("%d", &ratio);

					if (ratio > 0)
					{
						printf("Enter the Maximum value to be print:");
						scanf("%d", &max_limit);

						//logic for the printing G.p
						if (max_limit > first_num)
						{
							printf("G.p Series:");
							printf("  %d", first_num);
							count = ratio;
								//i = first_num * count ;
							for (  ; i <= max_limit ; count *= ratio  )
							{
								i = first_num * count ;

								if (i <= max_limit)
								{
									printf("  %d", i);
								}

							}

						}
						else
						{
							printf("Maximum number should be greater then first_number");
						}

					}
					else
					{
						puts("Invalid Common difference");
					}

				}
				else
				{
					puts("Invalid first number");
				}
				break;
			case 3: 
				printf("Enter The First Number:");
				scanf("%d", &first_num);
				if (first_num > 0)
				{
					printf("Enter the Common Difference:");
					scanf("%d", &difference);

					if( difference > 0)
					{
						printf("Enter the Maximum value to be print:");
						scanf("%d", &max_limit);
						if(max_limit > first_num)
						{
							//logic for the H.p
							printf("H.p Series:");
							for ( i = first_num ; i <= max_limit; i = i + difference )
							{
								h_p = (double)1 / i;
								printf("  %lf", h_p);
							}

						}
						else
						{
							puts("Maximum value should be greater then first number");
						}

					}
					else
					{
						puts("Invalid Common difference");
					}

				}
				else
				{
					puts("Invalid first number");
				}
				break;
			default:
				puts("Invalid Entery....");

		}

		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}
