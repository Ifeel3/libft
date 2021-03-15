/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 22:15:34 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/15 22:32:34 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = malloc(len + 1);
	if (result != NULL)
	{
		ft_strlcpy(result, &s[start - 1], len - 1);
		return (result);
	}
	return (NULL);

}
