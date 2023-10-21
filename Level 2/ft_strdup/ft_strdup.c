#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i = 0, len = 0;
	
	while(src[len])
		len++;
	char *ptr = (char *)malloc(sizeof(char) * (len));

	if(!ptr)
		return 0;
	while(src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return ptr;
}
