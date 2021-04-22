/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:56:09 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/22 16:36:07 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*tmp;
	size_t		bytes;

	if (dst == NULL || src == NULL)
		return (0);
	tmp = src;
	bytes = size;
	if (bytes != 0)
	{
		bytes--;
		while (bytes)
		{
			bytes--;
			if (*src == '\0')
			{
				*dst = '\0';
				break ;
			}
			*dst++ = *src++;
		}
	}
	if (bytes == 0 && size != 0)
		*dst = '\0';
	return (ft_strlen(tmp));
}
