#include <stdio.h>

int main()
{
	long double ch = 12.2;
	printf("%g\n", 1.2);
	printf("%f\n", 1.2);
	printf("%Lf\n", ch);
	printf("%x\n", 0xABCD);
	printf("%X\n", 0xABCD);
	printf("%#x\n", 0xABCD);
	printf("%#X\n", 0xABCD);
	printf("%#X\n", 10);
	printf("%o\n", 10);
//	printf("%O\n", 10);

	printf("%s\n", "Hello");
	printf("%10s\n", "Hello");
	printf("%4d\n", 1);
	printf("%3d\n", 10);
	printf("%3d\n", 100);

	printf("%*d\n", 1, 1);
	printf("%*d\n", 2, 1);
	printf("%*d\n", 3, 1);
	printf("%*s\n",6, "Hello");
	printf("%*s\n",7, "Hello");
	printf("%*s\n",2, "Hello");
	printf("%hx\n",0xFFFFFFFF);//h is short hence upper 2 bytes will be discarded hence only lower two bytes are printed (short = 2bytes)


	printf("%03d\n", 1);
	return 1;
}

