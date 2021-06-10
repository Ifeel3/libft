#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (NULL);
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
		ft_memrcpy(dest, src, n);
	return (dest);
}
