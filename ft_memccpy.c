/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:00:12 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/16 12:00:23 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*source;
	unsigned char		*destination;
	size_t				i;

	destination = dest;
	source = src;
	i = 0;
	if (!destination && !source)
		return (NULL);
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == c)
		{
			return (&destination[i + 1]);
		}
		i++;
	}
	return (NULL);
}
