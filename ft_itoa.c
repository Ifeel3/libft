/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:55:48 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/22 23:46:14 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_howbig(int c);

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_howbig(n);
	result = malloc(sizeof(char) * i + 1);
	if (result == NULL)
		return (NULL);
	if (n < 0)
	{
		n = n * (-1);
		result[0] = '-';
	}
	result[i] = '\0';
	while (n > 0)
	{
		i--;
		result[i] = (n % 10) + 48;
		n = n / 10;
	}
	return (result);
}

static int	ft_howbig(int c)
{
	int	i;

	if (c < 0)
	{
		i = 1;
		c = -c;
	}
	else
		i = 0;
	while (c)
	{
		c = c / 10;
		i++;
	}
	return (i);
}
