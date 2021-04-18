/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:56:09 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/18 15:44:09 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (ft_strlen(dst) >= size || ft_strlen(src) >= size)
	{
		ft_memmove(dst, src, size);
		dst[size] = '\0';
	}
	return (ft_strlen(src));
}
