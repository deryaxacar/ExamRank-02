#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t count;

	while(*s)
	{
		const char *p = reject;

		while(*p)
		{
			if(*p == *s)
				return count;
			p++;
		}
		count++;
		s++;
	}
	return count;
}
