#include "../libft.h"

static int	ft_isspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

static int	ft_isplusminus(int c)
{
	if (c == 43 || c == 45 || c == '\e' || ft_isalpha(c))
		return (1);
	else
		return (0);
}

static int	ft_isbig(long long int result, int minus, int toobig)
{
	if (toobig > 19 && minus == 1)
		return (-1);
	if (toobig > 19 && minus == -1)
		return (0);
	if (result > 9223372036854775807 && minus == 1)
		return (-1);
	if (result > 9223372036854775807 && minus == -1)
		return (0);
	return ((int)result * minus);
}

int	ft_atoi(const char *str)
{
	long long int	result;
	int				minus;
	int				toobig;

	if (*str == '\0')
		return (0);
	toobig = 0;
	result = 0;
	minus = 1;
	while ((!ft_isdigit(*str) || ft_isspace(*str)) && !ft_isplusminus(*str))
		str++;
	if (*str == '-')
	{
		minus = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*str - 48);
		str++;
		toobig++;
	}
	return (ft_isbig(result, minus, toobig));
}
