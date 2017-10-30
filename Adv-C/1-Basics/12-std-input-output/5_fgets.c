#include <stdio.h>

int main()
{
	char buffer[10];

	fgets(buffer, 10, stdin);

	puts(buffer);

	return 1;
}
