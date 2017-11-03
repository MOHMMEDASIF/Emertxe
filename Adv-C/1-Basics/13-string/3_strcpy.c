#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "Good";
	char d[10];
	strcpy(d,s);

	printf("DEST:%s\n",d);
}
