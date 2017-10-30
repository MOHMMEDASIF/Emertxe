#include <stdio.h>

int main()
{
	//unsigned char will not for becoz of the sign bit absence
	int ch;

	while((ch = getc(stdin)) != EOF)
	{
		putchar(ch);
	}
	return 1;
}
