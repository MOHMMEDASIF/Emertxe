/*
	code to manipulate strings
*/

#include <stdio.h>
#include <strings.h>
#include <string.h>
#define PALINDROME		 1
#define NOT_PALINDROME  -2

int is_palindrome(char *p_str);

int main()
{
	char string[30];
	char *temp;
	char *track;

	fgets(string, 30, stdin);
	
	char i;
	int string_length = strlen(string) - 1;
	temp = string;
	track = string;
	int string_count = 0;

//test
	//int status = is_palindrome(string);
	//printf("status:%d", status);
	
	printf("The input string is :%s\n", string);

	
	for(i = 0; i < string_length; i++)
	{
		if ( *(temp + i) == ' ' && *(track + i + 1) == ' ' )
		{

		}
		else
		{
			string[string_count] = *(temp + i);
			string_count++;

		}

		

	}
	string[string_count] = '\0';
	printf("\nAfter space delete The input string is :%s\n", string);
/*
	int str_len = strlen(string);
	char count = (char)str_len;
	char *reverse ;

	for(i = 0; i < str_len; i++)
	{
		reverse[count]	 = string[i];
		count --;

	}
	
	printf("\nAfter space delete The input string is :%s\n", reverse);
	*/
	int status = is_palindrome(string);
	if (status == PALINDROME)
	{
		printf("\n[%s] is an palindrome\n", string);
	}
	else
	{
		printf("\n[%s] is not a palindrome\n", string);
	}
	


}


int is_palindrome(char *p_str)
{
	int i;
	char *str_begins = p_str;
	int str_length = strlen(p_str) - 1;
	char *str_ends = p_str + str_length;

	for(i = 0; i < str_length; i++)
	{
			if ( *str_begins == *str_ends)
			{
				return PALINDROME;
			}
	
	}

	return NOT_PALINDROME;

}



/*
int is_palindrome(char *p_str)
{
	int i;
	char *str_begins = p_str;
	int str_length = strlen(p_str) - 1;
	char *str_ends = p_str + str_length;

	for(i = 0; i < str_length; i++)
	{
			if ( *str_begins == *str_ends)
			{
				return PALINDROME;
			}
	
	}

	return NOT_PALINDROME;

}

*/
