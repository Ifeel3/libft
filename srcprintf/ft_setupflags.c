#include "../libft.h"

static void	ft_initflags(t_type *flags)
{
	flags->minus = 0;
	flags->dot = 0;
	flags->nill = 0;
	flags->precision = 0;
	flags->width = 0;
	flags->type = 0;
}

int	ft_setupflags(char **string, t_type *flags, va_list ap)
{
	ft_initflags(flags);
	while (ft_isalpha(*(++(*string))) != 1 && **string != '%')
	{
		if (**string == '-')
			flags->minus = 1;
		if (**string == '0' && *(*string - 1) == '%' )
			flags->nill = 1;
		if (**string == '.')
			flags->dot = 1;
		if (*(*string - 1) == '.' && **string == '-')
			flags->dot = 0;
		if (ft_isdigit(**string) && flags->dot != 1)
			flags->width = (flags->width * 10) + **string - 48;
		if (ft_isdigit(**string) && flags->dot == 1)
			flags->precision = (flags->precision * 10) + **string - 48;
		if (**string == '*' && flags->dot != 1)
			flags->width = va_arg(ap, int);
		if (**string == '*' && flags->dot == 1)
			flags->precision = va_arg(ap, int);
	}
	if (ft_strchr("cspdiuxX%", **string) == NULL)
		return (0);
	flags->type = **string;
	(*string)++;
	return (1);
}
