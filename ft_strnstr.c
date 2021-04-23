/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:05 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/23 01:34:48 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char		*tmp;
	unsigned int	i;

	if (*little == '\0')
		return ((char *)big);
	if (*big == '\0' || len == 0 || ft_strlen(little) > ft_strlen(big))
		return (NULL);
	i = 0;
	tmp = big;
	while (len--)
	{
		if (*tmp == *little)
		{
			i = 0;
			while (*(tmp + i) == *(little + i) && len--)
			{
				if (*(tmp + i) == *(little + i) && len && *(little + i + 1) == 0)
					return ((char *) tmp);
				i++;
			}
		}
		tmp++;
	}
	return (NULL);
}
