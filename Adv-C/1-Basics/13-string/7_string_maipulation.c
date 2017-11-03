#include <stdio.h>
#include <string.h>

void check_vowels(char *name,int string_length);
int main()
{
	char name[200];
	int string_length;

	printf("Enter The String:");
	scanf("%[^\n]", name );

	string_length = strlen(name);
	printf("The given String is :%s\n", name);
	printf("String length :%d\n", string_length);

	check_vowels(name, string_length);


	return 0;
}

void check_vowels(char *name,int string_length)
{
	int i, count = 0, non_vowels = 0;

	for(i = 0; i < string_length; i++)
	{
		if(*(name + i) == 'a' )
		{
			count ++;
			continue;
		}
		else if(*(name + i) == 'e' )
		{
			count++;
			continue;

		}
		else if(*(name + i) == 'i' )
		{
			count++;
			continue;
		}
		else if(*(name + i) == 'o' )
		{
			count++;
			continue;
		}
		else if(*(name + i) == 'u' )
		{
			count++;
			continue;
		}
		non_vowels++;

	}
	printf("Count of Vowels in given string is %d\n", count);
	printf("Count of non_Vowels in given string is %d\n", non_vowels);
}
