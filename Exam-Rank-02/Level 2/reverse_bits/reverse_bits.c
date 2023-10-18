unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while(i--)
	{
		bit = bit * 2 + octet % 2;
		octet /= 2;
	}
	return bit;
}
