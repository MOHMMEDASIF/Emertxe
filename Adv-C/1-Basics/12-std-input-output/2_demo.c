#include <stdio.h>

int main()
{
	//unsigned char will not for becoz of the sign bit absence
	signed char ch;

	while((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 1;
}
