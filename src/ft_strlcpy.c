#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*tmp;
	size_t		bytes;

	if (dst == NULL || src == NULL)
		return (0);
	tmp = src;
	bytes = size;
	if (bytes != 0)
	{
		bytes--;
		while (bytes)
		{
			bytes--;
			if (*src == '\0')
			{
				*dst = '\0';
				break ;
			}
			*dst++ = *src++;
		}
	}
	if (bytes == 0 && size != 0)
		*dst = '\0';
	return (ft_strlen(tmp));
}
