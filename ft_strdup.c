/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 21:38:12 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/15 23:53:19 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;

	result = (char*)malloc(ft_strlen(s) + 1);
	if (result != NULL)
	{
		ft_strlcpy(result, s, ft_strlen(s));
		return (result);
	}
	return (NULL);
}
