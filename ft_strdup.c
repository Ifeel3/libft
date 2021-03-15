/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 21:38:12 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/15 21:54:15 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	i;

	i = 0;
	result = (char*)malloc(ft_strlen(s) + 1);
	if (result != NULL)
	{
		while (i < (ft_strlen(s) + 1))
		{
			result[i] = s[i];
			i++;
		}
		return (result);
	}
	return (NULL);
}
