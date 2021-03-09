#include "../../libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *destination;
	unsigned char *source;

	destination = (unsigned char*)dest;
	source = (unsigned char*)src;
	if (!destination && !source)
		return (NULL);
	if (destination >= source)
	{
		while (n-- != 0)
			destination[n] = source[n];
	}
	else
		destination = ft_memcpy(dest, src, n);
	return (destination);
}
