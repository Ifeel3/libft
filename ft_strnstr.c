/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:05 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/19 19:18:05 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0' || little == NULL)
		return ((char *)big);
	if (*big == '\0' || big == NULL)
		return (NULL);
	if (len == 0)
		return ((char *)big);
	if (ft_strlen(little) > ft_strlen(big))
		return (NULL);
	while (--len)
	{
		if (*big == *little)
		{
			if (ft_strncmp(big, little, ft_strlen(little)) == 0)
				return ((char *) big);
			return (NULL);
		}
		big++;
	}
	return (NULL);
}
