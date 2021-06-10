#include "../libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;

	new = ft_calloc(1, ft_strlen(src) + 1);
	if (new != NULL)
		ft_memmove(new, src, ft_strlen(src) + 1);
	return (new);
}
