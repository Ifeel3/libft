#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*source;

	source = (unsigned char *)s;
	while (n--)
	{
		if (*source == (unsigned char)c)
			return (source);
		source++;
	}
	return (NULL);
}
