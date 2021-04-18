/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 02:58:53 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/18 03:40:45 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	character;

	character = ft_memchr(src, c, n) - src + 1;
	if (ft_memchr(src, c, n))
		return (ft_memmove(dest, src, character) + character);
	else
		ft_memmove(dest, src, n);
	return (NULL);
}
