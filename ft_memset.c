/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:50:23 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/10 21:50:25 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *addr;

	if (s != NULL)
	{
		addr = (unsigned char*)s;
		while (--n)
			*addr++ = c;
	}
	return (s);
}
