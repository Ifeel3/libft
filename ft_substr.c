/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 23:42:27 by lvallie           #+#    #+#             */
/*   Updated: 2021/05/10 16:06:17 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	char	*tmp;
	char	*src;

	if (!s)
		return (NULL);
	src = (char *)s + start;
	if (start > ft_strlen(s))
	{
		new = malloc(sizeof(char) * 1);
		new[0] = 0;
		return (new);
	}
	if (ft_strlen(src) >= len)
		new = malloc(sizeof(char) * (len + 1));
	else
		new = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new)
		return (NULL);
	tmp = new;
	while (len-- && *src)
		*tmp++ = *src++;
	*tmp = 0;
	return (new);
}
