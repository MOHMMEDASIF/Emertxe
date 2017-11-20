/************************************************************************************************************************************************************

Title		: calculate the mean and the median using option from the command line argument
Author		: MOHMMED ASIF.S
Date		: 14/11/2017
description	: calculate mean and median by passing from the CLA using option

************************************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void display_help(void);
float mean(char **base);
float median(char **base, int count);

int main(int argc, char *argv[])
{
	char option;
	int count;

	do
	{
		if (argc == 2)
		{
			if( * (argv[1] + 1) == 'h')
			{
				display_help();
				exit(1);
			}
		}
		else if(argc < 3)
		{
			printf("Insufficient Argument....\n");
			printf("Type -h or --help for more details\n");
			exit(1);

		}
		switch ( * (argv[1] + 1))
		{
			case 'm':
					printf("Mean: %f\n", mean(argv + 2));
					break;
			case 'M':
					count = argc - 2;
					printf("Median: %f", median(argv + 2, count));
					break;
		}


		printf("\nDo you want to continue?[Y/N]:");
		scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

	return 0;
}

void display_help(void)
{
	puts("Usage: ./mean_median	<option>	<input>\n");
	puts("option:");
	puts("-m	:To Find Mean");
	puts("-M	:To Find Median");
}

float mean(char **base)
{
	int i;
	float sum;
	for(i = 0; *(base + i); i++)
	{
		sum = sum + atoi( * (base + i));

	}

	return (float)sum / i;
}

float median(char **base, int count)
{
	if (count % 2 == 0)
	{
		return (float)(atoi(*(base + (count / 2))) + atoi(*(base + ((count / 2) - 1)))) / 2;	
	}
	else
	{
		return atoi(*(base + (count / 2)));

	}

}

