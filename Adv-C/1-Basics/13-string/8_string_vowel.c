#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
	int output = 0;
	char* ip1;
	ip1 = (char *)malloc(512000 * sizeof(char));
	scanf("\n%[^\n]",ip1);
	int ip2;
	scanf("%d", &ip2);
	output = return_value(ip1,ip2);
	printf("%d\n", output);
	return 0;
}


int return_value(char *p, int value)
{
	int string_length = strlen(p);
	char array[20];
	int i, length, icount = 0, count = 0, non_vowels = 0;
	char *input1;
	char input1_copy[25];
	char *j;

	for (i = 1; i < string_length; i++)
	{
		printf("\nThis is new [%d]\n", i);
		icount = 0;
		input1 = strcpy(input1_copy, p);
		for(j = input1; icount <= i; j++)
		{
			printf("\n\t\tvalue:%c\n", *(input1 + icount));
			icount++;
		}

	}


	return -1;
	length= strlen(input1);
	printf("length :%d\n", length);
}

#if 0

			if( *(input1 + icount) == 'a')
			{
				count++;
				j++;
				continue;
			}
			else if( *(input1 + icount) == 'e')
			{
				count++;
				j++;
				continue;

			}
			else if( *(input1 + icount) == 'i')
			{
				count++;
				j++;
				continue;

			}
			else if( *(input1 + icount) == 'o')
			{
				count++;
				j++;
				continue;
			}
			else if( *(input1 + icount) == 'u')
			{
				count++;
				j++;
				continue;

			}
			non_vowels++;
			icount++;
				
			if (non_vowels >= value )
			{
				return non_vowels;
			}
			break;
#endif


