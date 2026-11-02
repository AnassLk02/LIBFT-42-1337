/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 08:17:55 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 18:47:30 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(long n)
{
	size_t	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	num_len;
	size_t	sign;
	long	nb;
	char	*ptr;

	nb = n;
	sign = (nb < 0);
	num_len = int_len(nb);
	ptr = malloc((num_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (sign)
	{
		ptr[0] = '-';
		nb *= -1;
	}
	ptr[num_len] = '\0';
	while (num_len > sign)
	{
		ptr[num_len - 1] = nb % 10 + '0';
		nb = nb / 10;
		num_len--;
	}
	return (ptr);
}
