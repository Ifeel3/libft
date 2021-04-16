/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:20:51 by lvallie           #+#    #+#             */
/*   Updated: 2021/04/16 11:23:24 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int				result;
	unsigned int	i;

	result = 0;
	if (nptr[0] == '-')
		i = 1;
	else
		i = 0;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if (nptr[0] == '-')
		result = -result;
	return (result);
}
