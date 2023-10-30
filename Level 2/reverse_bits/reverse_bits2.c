unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while(i--)
	{
		bit = (bit << 1) | (octet & 1);
		octet >>= 1;
	}
	return bit;
}
