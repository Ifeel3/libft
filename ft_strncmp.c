/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:34:20 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/23 00:16:11 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*string1;
	const char	*string2;

	string1 = s1;
	string2 = s2;
	if (ft_strlen(string1) >= n && ft_strlen(string2) >= n)
		return (ft_memcmp(string1, string2, n));
	if (n >= 1)
	{
		while (--n && *string1 != '\0' && *string2 != '\0')
		{
			if ((unsigned char)*string1 != (unsigned char)*string2)
				break ;
			string1++;
			string2++;
		}
	}
	return ((unsigned char)*string1 - (unsigned char)*string2);
}
