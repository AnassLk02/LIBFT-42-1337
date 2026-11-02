/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:19:19 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 10:01:51 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	index;
	int	result;
	int	sign;

	if (!nptr)
		return (0);
	index = 0;
	result = 0;
	sign = 1;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || nptr[index] == 32)
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign *= -1;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		result = result * 10 + (nptr[index] - 48);
		index++;
	}
	return (sign * result);
}
