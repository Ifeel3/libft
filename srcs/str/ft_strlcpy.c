/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 00:47:11 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/11 03:28:34 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	char		*destination;
	const char	*source;
	size_t		n;
	size_t		start_n;

	destination = dst;
	source = src;
	n = siz - 2;
	start_n = n;
	if (n != 0)
	{
		*(destination + n) = '\0';
		n--;
		while (n != 0)
		{
			if ((*(destination + n) == 0) || (*(source + n) == 0))
				break ;
			*(destination + n) = *(source + n);
			n--;
		}
		*(destination + n) = *(source + n);
	}
	else if (n == 0)
		return (0);
	return ((source + (start_n - n)) - src);
}
