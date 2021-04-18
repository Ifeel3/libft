/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:34:20 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/18 12:54:35 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1len == 0 || s2len == 0)
		return (ft_memcmp(s1, s2, 1));
	if (s1len >= n && s2len >= n)
		return (ft_memcmp(s1, s2, n));
	else if (s1len < n || s2len < n)
	{
		if (s1len <= s2len)
			return (ft_memcmp(s1, s2, ft_strlen(s1)));
		else if (s1len > s2len)
			return (ft_memcmp(s1, s2, ft_strlen(s2)));
	}
	return (0);
}
