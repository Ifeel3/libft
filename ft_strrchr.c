/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 19:39:59 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/14 20:12:05 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int i;

	i = ft_strlen(s) - 2;
	while ((s + i) >= s)
	{
		if (*(s + i) == c)
			return ((char*)&s[i]);
		i--;
	}
	return (NULL);
}
