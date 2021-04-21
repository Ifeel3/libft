/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:56:09 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/21 22:10:12 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*destination;
	const char	*source;

	destination = dst;
	source = src;
	if (dst == NULL || src == NULL)
		return (0);
	if (size != 0)
	{
		while (--size)
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
