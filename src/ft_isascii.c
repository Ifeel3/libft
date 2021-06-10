#include "../libft.h"

int	ft_isascii(int c)
{
	if (ft_isprint(c) || ft_isnotprint(c))
		return (1);
	else
		return (0);
}
