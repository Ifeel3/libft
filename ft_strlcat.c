/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:05:50 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/16 12:05:59 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*destination;
	const char	*source;
	size_t		n;
	size_t		i;

	destination = dst;
	source = src;
	size = ft_strlen(source) + ft_strlen(destination);
	if ((destination != NULL) && (source != NULL) && (size != 0))
	{
		if ((ft_strlen(source) + ft_strlen(destination)) <= (size))
		{
			i = ft_strlen(destination);
			n = 0;
			while (i <= (size - 1))
			{
				*(destination + i) = *(source + n);
				i++;
				n++;
			}
			*(destination + i) = '\0';
		}
	}
	return (size);
}
