#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *addr;

	if (s != NULL)
	{
		addr = (unsigned char*)s;
		while (n--)
			*addr++ = c;
	}
	return (s);
}
