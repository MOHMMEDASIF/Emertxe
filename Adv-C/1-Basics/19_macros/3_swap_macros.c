#include <stdio.h>
#define SWAP(x) (x << 4) | (x >> 4)

int main()
{
	unsigned char ch = 0xBA;

	unsigned char swap = SWAP(ch);

	printf("%X\n", swap);

}
