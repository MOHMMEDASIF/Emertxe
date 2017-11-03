#include <stdio.h>
#include <string.h>

void xstrcat(char *d, char *s);

int main()
{
	char s[20] = "Dennis";
	char d[] = "Ritchie";
	xstrcat(d,s);

	printf("DEST:%s\n",s);
}
void xstrcat(char *d, char *s)
{
	while(*s++);
	*--s =  ' ';
	s++;

	while(*s++ = *d++);
}
