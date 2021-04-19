/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:56:09 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/19 21:54:05 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*destination;
	const char	*source;
	size_t		tmp;

	tmp = size;
	destination = dst;
	source = src;
	if (dst == NULL || src == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	if (tmp != 0)
	{
		while (--tmp)
		{
			if (*source == '\0' || *destination == '\0')
				break ;
			*destination = *source;
			destination++;
			source++;
		}
		*destination = '\0';
	}
	return (ft_strlen(src));
}
