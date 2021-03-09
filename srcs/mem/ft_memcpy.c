#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char *source;
	unsigned char *destination;
	size_t i;

	destination = dest;
	source = src;
	i = 0;
	if (!destination && !source)
		return (NULL);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
