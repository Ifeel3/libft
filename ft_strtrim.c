/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 23:34:56 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/16 01:19:39 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*tmp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	tmp = (ft_strdup(s1)) ? ft_strdup(s1) : NULL;
	if (tmp != NULL)
	{
		while (tmp[i++] != '\0')
		{
			while (set[j] != '\0')
				if (tmp[i] == set[j++])
				{
					while (tmp[i++] != '\0')
						tmp[i - 1] = tmp[i];
					i = 0;
				}
			j = 0;
		}
	}
	result = (ft_strdup(tmp)) ? ft_strdup(tmp) : NULL;
	free(tmp);
	return (result);
}
