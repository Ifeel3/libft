#include "../libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	character;

	character = ft_memchr(src, c, n) - src + 1;
	if (ft_memchr(src, c, n))
		return (ft_memmove(dest, src, character) + character);
	else
		ft_memmove(dest, src, n);
	return (NULL);
}
