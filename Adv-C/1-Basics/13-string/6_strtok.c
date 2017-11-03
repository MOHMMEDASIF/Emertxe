#include <stdio.h>
#include <string.h>

int main()
{
	char *ptr;
	char str[] = "::Bangalore:@Delhi;::Raining;";
	char *delimit = ":@;";

	ptr  = strtok(str, delimit);

	while(ptr)
	{
		printf("%s\t", ptr);
		ptr = strtok(NULL, delimit);

	}
	puts("");

	return 1;
}

