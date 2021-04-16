/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:05 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/16 12:08:41 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((i <= (len - 1)) && (big[i] != '\0'))
	{
		if (big[i] == little[j])
			j++;
		else if (little[j] == '\0')
			return ((char *)big + i - ft_strlen(little));
		else if (big[i] != little[j])
			j = 0;
		i++;
	}
	return (NULL);
}
