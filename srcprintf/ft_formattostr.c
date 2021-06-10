#include "../libft.h"

static void	ft_printnullorspace(t_type *flags, size_t width, size_t precision)
{
	char	chr;

	if (flags->minus != 1 && flags->nill == 1)
		chr = '0';
	else
		chr = ' ';
	while (width-- > precision)
		write(1, &chr, 1);
}

int	ft_formattostr(char *string, t_type *flags)
{
	size_t	precision;
	size_t	width;

	if (string == NULL)
		string = "(null)";
	if (flags->dot == 0)
		precision = ft_strlen(string);
	else
	{
		if ((size_t)flags->precision > ft_strlen(string))
			precision = ft_strlen(string);
		else
			precision = flags->precision;
	}
	if ((size_t)flags->width > precision)
		width = flags->width;
	else
		width = precision;
	if (flags->minus == 1)
		write(1, string, precision);
	ft_printnullorspace(flags, width, precision);
	if (flags->minus == 0)
		write(1, string, precision);
	return ((int)width);
}
