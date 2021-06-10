#include "../libft.h"

void	ft_putnbr_hex(unsigned int number, int type)
{
	if (number > 15)
		ft_putnbr_hex(number >> 4, type);
	if (type == 'x')
		write(1, &"0123456789abcdef"[number & 0x0F], 1);
	if (type == 'X')
		write(1, &"0123456789ABCDEF"[number & 0x0F], 1);
}
