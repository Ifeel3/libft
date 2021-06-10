#include "../libft.h"

void	ft_putnbr_dec(long long int number)
{
	if (number < 0)
		number = -number;
	if (number > 9)
		ft_putnbr_dec(number / 10);
	number = (int)((number % 10) + 48);
	write(1, &number, 1);
}
