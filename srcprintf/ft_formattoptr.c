#include "../libft.h"

static size_t	ft_countptr_hex(intptr_t number)
{
	size_t	counter;

	counter = 0;
	if (number > 15)
		counter = ft_countptr_hex(number >> 4);
	return (counter + 1);
}

static void	ft_putptr_hex(intptr_t number, int type)
{
	if (number > 15)
		ft_putptr_hex(number >> 4, type);
	write(1, &"0123456789abcdef"[number & 0x0F], 1);
}

static void	widandprec(intptr_t addr, t_type *fl, size_t *wid, size_t *prec)
{
	if (fl->dot == 1)
	{
		if ((size_t)fl->precision > ft_countptr_hex(addr))
			*prec = fl->precision;
		else
			*prec = ft_countptr_hex(addr);
	}
	else
		*prec = ft_countptr_hex(addr);
	if (addr == 0 && fl->dot == 1 && fl->precision == 0)
		*prec = 0;
	if ((size_t)fl->width > *prec + 2)
		*wid = fl->width;
	else
		*wid = *prec + 2;
}

static void	printspace(size_t count1, size_t count2, int chr)
{
	while (count1-- > count2)
		write(1, &chr, 1);
}

int	ft_formattoptr(void *ptr, t_type *flags)
{
	intptr_t	addr;
	size_t		precision;
	size_t		width;
	char		chr;

	addr = (intptr_t)ptr;
	chr = ' ';
	widandprec(addr, flags, &width, &precision);
	if (flags->nill == 1 && flags->dot != 1)
		chr = '0';
	if (chr == '0')
		write(1, "0x", 2);
	if (flags->minus != 1)
		printspace(width, precision + 2, chr);
	if (chr == ' ')
		write(1, "0x", 2);
	printspace(precision, ft_countptr_hex(addr), '0');
	if ((addr == 0 || ptr == NULL) && flags->dot == 1 && flags->precision == 0)
		;
	else
		ft_putptr_hex(addr, flags->type);
	if (flags->minus == 1)
		printspace(width, precision + 2, ' ');
	return ((int)width);
}
