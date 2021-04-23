/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 23:42:27 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/22 23:46:14 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (s == NULL)
		return (NULL);
	new = malloc((len + 1) * sizeof(*s));
	if (new == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		ft_memmove(new, s + start, len);
		*(new + len) = '\0';
	}
	return (new);
}
