#include "../libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)ptr;
	while (n--)
		*tmp++ = (unsigned char)c;
	return (ptr);
}
