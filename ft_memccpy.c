/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:00:12 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/16 17:06:32 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*source;
	char		*destination;
	size_t		i;

	destination = dest;
	source = src;
	i = 0;
	if (!destination && !source)
		return (NULL);
	while (i < n)
	{
		if (source[i] == (unsigned char)c)
		{
			destination[i] = source[i];
			return (&destination[i + 1]);
		}
		destination[i] = source[i];
		i++;
	}
	return (NULL);
}
