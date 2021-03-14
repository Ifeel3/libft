/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvallie <lvallie@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 02:41:08 by lvallie           #+#    #+#             */
/*   Updated: 2021/03/15 03:18:23 by lvallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int			result;
	unsigned int	i;

	result = 0;
	i = (nptr[0] == '-') ? 1 : 0;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if (nptr[0] == '-')
		result = -result;
	return (result);
}
