/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:25:47 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/16 11:32:21 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*addr;

	if (s != NULL)
	{
		addr = (unsigned char *)s;
		while (n)
		{
			*(addr++) = c;
			n--;
		}
	}
	return (s);
}
