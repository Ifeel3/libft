/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:56:09 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/18 20:22:37 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*destination;
	const char	*source;
	size_t		tmp;
	size_t		dstlen;

	dstlen = ft_strlen(dst);
	tmp = size;
	destination = dst + ft_strlen(dst);
	source = src;
	if (tmp != 0)
	{
		if (ft_strlen(destination + 1) >= size)
			ft_memmove(dst, src, size);
		else
			ft_memmove(dst, src, ft_strlen(destination + 1));
	}
	return (ft_strlen(src) + dstlen);
}
