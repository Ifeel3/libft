/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 14:03:11 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/19 16:47:38 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);
static int	ft_isplusminus(int c);

int	ft_atoi(const char *str)
{
	int	result;
	int	minus;

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
	}
	return (result * minus);
}

static int	ft_isspace(int c)
{
	if (c == ' ' || c =='\t' || c == '\v' || c == '\f' || c == '\r' || c == '\n')
		return (1);
	else
		return (0);
}

static int	ft_isplusminus(int c)
{
	if (c == 43 || c == 45 || c == '\e')
		return (1);
	else
		return (0);
}
