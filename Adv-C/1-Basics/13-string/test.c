#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	//int i;

	char *i;

	printf("Enter the String:");
	scanf("%[^\n]s", string);
	
	for(i = string; *i; i++) 
	{
		printf("%c\n", *i );
		sleep(1);
	}


	return 0;
}
