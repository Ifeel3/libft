#include "../libft.h"

extern int	ft_converter(char **string, va_list ap, int *printed_chars);

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		printed_chars;
	char	*string;

	string = (char *)str;
	printed_chars = 0;
	va_start(ap, str);
	while (*string)
	{
		if (*string == '%')
		{
			if (!ft_converter(&string, ap, &printed_chars))
				return (-1);
		}
		else if (*string != '%')
		{
			write(1, string, 1);
			printed_chars++;
			string++;
		}
	}
	va_end(ap);
	return (printed_chars);
}
