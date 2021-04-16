/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:11:52 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/16 13:24:32 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	(void) set;

	if (!(tmp = malloc(sizeof(ft_strlen(s1)))))
		return (NULL);
	ft_strlcpy(tmp, s1, ft_strlen(s1));
	return (tmp);
}
