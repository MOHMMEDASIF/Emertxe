/*
   code to implement the test-pattern
 */

#include <stdio.h>

int main()
{
	char option;
	do 
	{
		//declaration of the variables
		int n_col, row, col, n_row, num, count_ch = 0;
		char ch;
		double avg;

		//prompt the user for the character
		puts("Enter the character to display:");
		scanf("\n%c", &ch);

		if (ch == '*' || ch == '#' || ch == '@' || ch == '$')
		{
			//prompt the user for column
			puts("Enter No.of columns:");
			scanf("%d", &n_col);
			n_row = 2 * n_col + 1;

			if (n_col >= 10 && n_col <= 20)
			{
				//prompt the user for Number
				puts("Enter the Number: ");
				scanf("%d", &num);

				if (num >=0 && num <= 9)
				{
					if (num % 2 == 0 )
					{
						switch (num)
						{
							case 2 :
								//line
								for (col = 0; col < n_col; col++)
								{
									printf(" %c ", ch);
									count_ch++;
								}
								puts("");

								//right_horizontal up line
								for (row = 1 ; row < n_row / 2 ; row++)
								{
									for(col = 1 ; col <= n_col ; col ++)
									{
										if (col == n_col)
										{
											printf(" %c ", ch);
											count_ch++;
										}
										else
										{
											printf("   ");
										}
									}
									printf("\n");
								}

								//line
								for (col = 0; col < n_col; col++)
								{
									printf(" %c ", ch);
									count_ch++;
								}
								puts("");

								//left- horizontal bottom line
								for (row = 1; row < n_row / 2; row++ )
								{
									for (col = 1; col < n_col ; col++)
									{
										if (col == 1)
										{
											printf(" %c ", ch);
											count_ch++;
										}
										else
										{
											printf("   ");
										}

									}
									printf("\n");

								}

								//line
								for (col = 0; col < n_col; col++)
								{
									printf(" %c ", ch);
									count_ch++;
								}

								break;
							case 4 : 
								//Left-Right horizontal Line
								for (row = 0; row < n_row / 2; row++ )
								{
									for (col = 0; col < n_col ; col++)
									{
										if (col == 0 || col == n_col - 1)
										{
											printf(" %c ", ch);
											count_ch++;
										}
										else
										{
											printf("   ");
										}

									}
									printf("\n");

								}

								//line
								for (col = 0; col < n_col; col++)
								{
									printf(" %c ", ch);
									count_ch++;
								}
								puts("");

								//Right-horizontal bottom line
								for (row = 0 ; row < n_row / 2 ; row++)
								{
									for(col = 0 ; col < n_col ; col ++)
									{
										if (col == n_col - 1)
										{
											printf(" %c ", ch);
											count_ch++;
										}
										else
										{
											printf("   ");
										}
									}
									printf("\n");
								}


								break;
							case 6 :
								//line
								for (col = 0; col < n_col; col++)
								{
									printf(" %c ", ch);
									count_ch++;
								}
								puts("");

								//Left-horizontal up line
								for (row = 1; row < n_row / 2 ; row++)
								{
									for(col = 1; col < n_col ; col ++)
									{
										if (col == 1)
										{
											printf(" %c ", ch);
											count_ch++;
										}
										else
										{
											printf("   ");
										}
									}
									printf("\n");
								}

								//line
								for (col = 0; col < n_col; col++)
								{
									printf(" %c ", ch);
									count_ch++;
								}
								puts("");

								//left-right horizontal Line
								for (row = 1; row < n_row / 2; row++ )
								{
									for (col = 1; col <= n_col ; col++)
									{
										if (col == 1 || col == n_col)
										{
											printf(" %c ", ch);
											count_ch++;
										}
										else
										{
											printf("   ");
										}

									}
									printf("\n");

								}

								//line
								for (col = 0; col < n_col; col++)
								{
									printf(" %c ", ch);
									count_ch++;
								}


								break;
							case 8 :		
								//line
								for (col = 0; col < n_col; col++)
								{
									printf(" %c ", ch);
									count_ch++;
								}
								puts("");

								//left-right horizontal line
								for (row = 1; row < n_row / 2; row++ )
								{
									for (col = 1; col <= n_col ; col++)
									{
										if (col == 1 || col == n_col)
										{
											printf(" %c ", ch);
											count_ch++;
										}
										else
										{
											printf("   ");
										}

									}
									printf("\n");

								}

								//line
								for (col = 0; col < n_col; col++)
								{
									printf(" %c ", ch);
									count_ch++;
								}
								puts("");

								//left-right horizontal line
								for (row = 1; row < n_row / 2; row++ )
								{
									for (col = 1; col <= n_col ; col++)
									{
										if (col == 1 || col == n_col)
										{
											printf(" %c ", ch);
											count_ch++;
										}
										else
										{
											printf("   ");
										}

									}
									printf("\n");

								}

								//line
								for (col = 0; col < n_col; col++)
								{
									printf(" %c ", ch);
									count_ch++;
								}

								break;
							default: puts("Invalid entry...Try again");
						}

						//calculate the average
						avg = (double)count_ch / (n_row * n_col) * 100;
						printf("\nTOTAL CHARACTERS PRINTED:%d", count_ch);
						printf("\nAverage:%lf", avg);

					}
					else
					{
						puts("Invalid Input.....Please enter an even Number ");
					}
				}
				else
				{
					puts("Number should be between 0-9");
				}

			}
			else
			{
				puts("column should be between 10-20:");
			}
		}
		else
		{
			puts("Invalid Input try again....");
		}


		//prompt the user for the user_option
		puts("\n\n\nDo you want to continue?[Y/N]");
		scanf("\n%c", &option);

	}while( option == 'y' || option == 'Y');
	return 0;
}
