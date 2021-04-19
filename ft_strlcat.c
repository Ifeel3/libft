/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:56:09 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/19 22:24:23 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*destination;
	const char	*source;
	size_t		len;

	len = ft_strlen(src) + ft_strlen(dst);
	if (size <= 0)
		return (0);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	destination = dst;
	source = src;
	size--;
	while (*destination && size--)
		destination++;
	while (*source && size--)
		*destination++ = *source++;
	*destination = '\0';
	return (len);
}
