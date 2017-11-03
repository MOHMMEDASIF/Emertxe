#include <stdio.h>
#include <string.h>

void xstrcpy(char *d, char *s);

int main()
{
	char s[] = "Good";
	char d[10];
	xstrcpy(d,s);

	printf("DEST:%s\n",d);
}
void xstrcpy(char *d, char *s)
{
	while(*d++ = *s++);
}
