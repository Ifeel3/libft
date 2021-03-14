/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 01:27:33 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/15 02:08:46 by lvallie          ###   ########.fr       */
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
		return ((char*)big);
	while ((i <= (len - 1)) && (big[i] != '\0'))
	{
		if (big[i] == little[j])
			j++;
		else if (little[j] == '\0')
			return ((char*)big + i - ft_strlen(little));
		else if (big[i] != little[j])
			j = 0;
		i++;
	}
	return (NULL);
}
