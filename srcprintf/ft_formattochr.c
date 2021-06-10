#include "../libft.h"

int	ft_formattochr(int c, t_type *flags)
{
	size_t	width;
	size_t	tmplen;
	char	chr;

	if (flags->width > 1)
		width = flags->width;
	else
		width = 1;
	tmplen = width;
	if (width > 1)
	{
		if (flags->nill == 1 && flags->minus != 1)
			chr = '0';
		else
			chr = ' ';
	}
	if (flags->minus == 1)
		write(1, &c, 1);
	while (tmplen-- > 1)
		write(1, &chr, 1);
	if (flags->minus != 1)
		write(1, &c, 1);
	return ((int)width);
}
