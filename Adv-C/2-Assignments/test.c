#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "one,two,three";
	char *p = strtok(s, ",");

	printf("%s\n", p);

	while (p = strtok(NULL, ","))
	{
		printf("%s\n", p);

	}

	return 0;
}
