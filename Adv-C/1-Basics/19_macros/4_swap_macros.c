#include <stdio.h>
#define SWAP(num)  ((num & 0xF0F0) >> 4 ) | ((num & 0x0F0F) << 4)

int main()
{
	unsigned short ch = 0x1A2B;

	unsigned short swap = SWAP(ch);

	printf("%X\n", swap);

    unsigned int hex;
	printf("Enter hex:");
	scanf("%x", &hex);


	printf("%X\n", hex);

}
