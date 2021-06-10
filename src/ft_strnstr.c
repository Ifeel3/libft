#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	const char		*tmp;

	if (*little == '\0')
		return ((char *) big);
	if (*big == '\0' || len == 0 || ft_strlen(little) > ft_strlen(big))
		return (NULL);
	i = 0;
	tmp = big;
	while (len && len >= ft_strlen(little))
	{
		while (tmp[i] == little[i])
		{
			if (little[i + 1] == 0)
				return ((char *)tmp);
			i++;
		}
		i = 0;
		tmp++;
		len--;
	}
	return (NULL);
}
