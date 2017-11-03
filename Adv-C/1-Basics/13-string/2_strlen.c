#include <stdio.h>

size_t x_strlen(char *s);

int main()
{
	char name[20] = "Dennis";

	size_t count = x_strlen(name);

	printf("No_of character in %s is %zu", name,count );


	return 0;
}

#if 0 //version 1
size_t x_strlen(char *s)
{
	size_t count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}

	return count;

}
#endif

#if 0
size_t x_strlen(char *s)
{
	char *base = s;
	while(*s != '\0')
	{
		s++;
	}

	return s - base;
}
#endif
size_t x_strlen(char *s)
{
	char *base = s;
	while(*s++ != '\0');

	return s - base - 1;
}
