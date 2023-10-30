unsigned char	reverse_bits(unsigned char octet)
{
	int i = 0;
	unsigned char bit;

	while(i++ < 8)
	{
		bit = (bit << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return bit;
}
#include <stdio.h>

int main()
{
	unsigned char x = 58;
	printf("önce: %d\n", x);
	printf("sonra: %d\n", reverse_bits(x));
}
