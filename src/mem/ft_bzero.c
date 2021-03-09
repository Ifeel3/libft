#include "../../libft.h"
#include <stdlib.h>

void	*ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
	return (s);
}
