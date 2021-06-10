#include "../libft.h"

extern int	ft_formattochr(int c, t_type *flags);
extern int	ft_formattostr(char *string, t_type *flags);
extern int	ft_formattoptr(void *ptr, t_type *flags);
extern int	ft_formattoint(long long int number, t_type *flags);
extern int	ft_formattohex(int number, t_type *flags);

void	ft_checktype(t_type *flags, int *printed_chars, va_list ap)
{
	char	type;

	type = flags->type;
	if (type == '%')
		*printed_chars += ft_formattochr('%', flags);
	if (type == 'c')
		*printed_chars += ft_formattochr(va_arg(ap, int), flags);
	if (type == 's')
		*printed_chars += ft_formattostr(va_arg(ap, char *), flags);
	if (type == 'p')
		*printed_chars += ft_formattoptr(va_arg(ap, void *), flags);
	if (type == 'd' || type == 'i')
		*printed_chars += ft_formattoint(va_arg(ap, int), flags);
	if (type == 'x' || type == 'X')
		*printed_chars += ft_formattohex(va_arg(ap, int), flags);
	if (type == 'u')
		*printed_chars += ft_formattoint(va_arg(ap, unsigned int), flags);
}
