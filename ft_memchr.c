/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:17:02 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 10:06:34 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			n_byte;
	unsigned char	*p;

	p = (unsigned char *)s;
	n_byte = 0;
	while (n_byte < n)
	{
		if (p[n_byte] == (unsigned char)c)
			return ((void *)&p[n_byte]);
		n_byte++;
	}
	return (NULL);
}
