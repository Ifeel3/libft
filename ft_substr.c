/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 23:42:27 by lvallie           #+#    #+#             */
/*   Updated: 2021/05/09 05:09:48 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	char	*tmp;
	char	*src;
	size_t	strlen;

	src = (char *)s + start;
	strlen = ft_strlen(s);
	if (ft_strlen(src) >= len)
		new = malloc(sizeof(char) * (len + 1));
	else
		new = malloc(sizeof(char) * (ft_strlen(src) + 1));
	tmp = new;
	while (len && *src)
	{
		*tmp++ = *src++;
		len--;
	}
	*tmp = 0;
	return (new);
}
