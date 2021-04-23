/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 23:42:27 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/23 14:16:35 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new;
	char const	*stmp;
	char		*newtmp;

	if (s == NULL)
		return (NULL);
	if (len <= ft_strlen(s))
		new = malloc((len + 1) * sizeof(*s));
	else
		new = malloc((ft_strlen(s) + 1) * sizeof(*s));
	if (new == NULL)
		return (NULL);
	if (start <= ft_strlen(s) && start <= len)
		stmp = s + start;
	else
	{
		*new = 0;
		return (new);
	}
	newtmp = new;
	while (len-- && *stmp != 0)
		*newtmp++ = *stmp++;
	*newtmp = 0;
	return (new);
}
