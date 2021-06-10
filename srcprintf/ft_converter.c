#include "../libft.h"

extern int	ft_setupflags(char **string, t_type *flags, va_list ap);
extern void	ft_checktype(t_type *flags, int *printed_chars, va_list ap);

int	ft_converter(char **string, va_list ap, int *printed_chars)
{
	t_type	flags;

	if (!ft_setupflags(string, &flags, ap))
		return (0);
	if (flags.precision < 0)
	{
		flags.dot = 0;
		flags.precision = 0;
	}
	if (flags.width < 0)
	{
		flags.minus = 1;
		flags.width = -flags.width;
	}
	ft_checktype(&flags, printed_chars, ap);
	return (1);
}
