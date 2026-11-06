/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:39:35 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/02 07:17:05 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*d;
	const unsigned char	*s;

	index = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s)
		return (dest);
	while (n > 0 && d > s)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return (dest);
}
