#include "../libft.h"

size_t	ft_countnbr_hex(unsigned int number)
{
	size_t	counter;

	counter = 0;
	if (number > 15)
		counter = ft_countnbr_hex(number >> 4);
	return (counter + 1);
}
