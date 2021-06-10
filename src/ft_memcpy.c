#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!destination && !source)
		return (NULL);
	while (n--)
		*destination++ = *source++;
	return (dest);
}
