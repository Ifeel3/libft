/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:09:50 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/16 12:10:08 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;

	result = (char *)malloc(ft_strlen(s) + 1);
	if (result != NULL)
	{
		ft_strlcpy(result, s, ft_strlen(s));
		return (result);
	}
	return (NULL);
}
