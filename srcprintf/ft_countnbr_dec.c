#include "../libft.h"

size_t	ft_countnbr_dec(long long int number)
{
	size_t	counter;

	counter = 0;
	if (number < 0)
		number = -number;
	if (number > 9)
		counter = ft_countnbr_dec(number / 10);
	return (counter + 1);
}
