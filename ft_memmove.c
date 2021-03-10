/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:50:00 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/10 22:06:50 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *destination;
	unsigned char *source;

	destination = (unsigned char*)dest;
	source = (unsigned char*)src;
	if (!destination && !source)
		return (NULL);
	if (destination >= source)
	{
		while (n-- != 0)
			destination[n] = source[n];
	}
	else
		destination = ft_memcpy(dest, src, n);
	return (destination);
}
