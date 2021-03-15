/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:50:23 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/15 18:39:22 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *addr;

	if (s != NULL)
	{
		addr = (unsigned char*)s;
		while (n)
		{
			*(addr++) = c;
			n--;
		}
	}
	return (s);
}
