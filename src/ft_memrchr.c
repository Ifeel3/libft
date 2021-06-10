#include "../libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*source;

	source = (unsigned char *)s + n - 1;
	while (n--)
	{
		if (*source == (unsigned char)c)
			return (source);
		source--;
	}
	return (NULL);
}
