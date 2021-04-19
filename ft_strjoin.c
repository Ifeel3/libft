/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 23:58:37 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/19 23:59:33 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new = malloc((sizeof(*s1) + 1) * (ft_strlen(s1) + ft_strlen(s2)));
	if (new == NULL)
		return (NULL);
	tmp = new;
	ft_memmove(tmp, s1, ft_strlen(s1));
	tmp += ft_strlen(s1);
	ft_memmove(tmp, s2, ft_strlen(s2));
	tmp += ft_strlen(s2);
	*tmp = '\0';
	return (new);
}
