/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:05 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/23 14:34:58 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	const char		*tmp;

	if (*little == '\0')
		return ((char *) big);
	if (*big == '\0' || len == 0 || ft_strlen(little) > ft_strlen(big))
		return (NULL);
	i = 0;
	tmp = big;
	while (len && len >= ft_strlen(little))
	{
		while (tmp[i] == little[i])
		{
			if (little[i + 1] == 0)
				return ((char *)tmp);
			i++;
		}
		i = 0;
		tmp++;
		len--;
	}
	return (NULL);
}
