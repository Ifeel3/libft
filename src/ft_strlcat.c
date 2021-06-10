#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*destination;
	const char	*source;
	size_t		len;

	len = ft_strlen(src) + ft_strlen(dst);
	if (size <= ft_strlen(dst) || size <= 0)
		return (size + ft_strlen(src));
	destination = dst;
	source = src;
	size--;
	while (*destination && size--)
		destination++;
	while (*source && size--)
		*destination++ = *source++;
	*destination = '\0';
	return (len);
}
