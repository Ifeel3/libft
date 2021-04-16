/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:04:31 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/16 12:04:52 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	char		*destination;
	const char	*source;
	size_t		n;
	size_t		i;

	destination = dst;
	source = src;
	n = siz - 1;
	i = 0;
	if (n != 0)
	{
		while (i <= n)
		{
			*(destination + i) = *(source + i);
			i++;
		}
		*(destination + i) = *(source + i);
	}
	else if (n == 0)
		return (0);
	return (i - 1);
}
