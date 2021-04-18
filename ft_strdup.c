/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 21:27:14 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/18 21:44:44 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;

	new = ft_calloc(1, ft_strlen(src) + 1);
	if (new != NULL)
		ft_memmove(new, src, ft_strlen(src) + 1);
	return (new);
}
