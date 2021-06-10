#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n)
	{
		if (*string1 != *string2)
			break ;
		string1++;
		string2++;
	}
	return (*string1 - *string2);
}
