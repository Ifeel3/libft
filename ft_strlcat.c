/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:18:31 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/14 19:23:19 by lvallie          ###   ########.fr       */
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
